/*- *Sensors, widgets & includes -*/
#include "bluetooth.c"
#include "drawing.c"

#pragma config(Motor,  motorA,          A,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          B,          tmotorNXT, PIDControl, encoder)
#pragma config(Sensor, S1,     lightSensor1,         sensorLightActive)
#pragma config(Sensor, S2,     lightSensor2,         sensorLightActive)
#pragma config(Sensor, S3,     sonarSensor,         sensorSONAR)

#define moR_cur motor[motorA]
#define moL_cur motor[motorB]
#define liR SensorValue[lightSensor1]
#define liL SensorValue[lightSensor2]
#define son SensorValue[sonarSensor]

// Output A = moR (motorA, right wheel)
// Output B = moL (motorB, left wheel)
// Output C = -
// Sensor 1 = liR (lightSensor1, right light sensor) 25 = lots of black, 70 = no black
// Sensor 2 = liL (lightSensor2, left light sensor)
// Sensor 3 = son (sonar sensor)
// Sensor 4 = -

/*- variables -*/
int maxSpd = 60; // max speed the vehicle tries to reach.
float moR_goal, moL_goal; // goals to use as reference.
float factor = 0.4; // factor at which the speed increments.

/* \brief black_to_percentage
 * converts given light value to a percentage, 0% = black, 100% = white */
float light_to_percentage(int value)
{
	return ((value-25)/4.50)/10.00;
}

/* \brief soundFX
 * plays a sound based on given ID */
void soundFX(int soundID)
{
	clearSounds();
	if(soundID == 00){
		playSound(soundBeepBeep);
	}
}

/* \brief correct_speed
 * adjusts wheels to follow path */
void correct_speed(int speed)
{
	moR_goal = speed*(light_to_percentage(liR));
	moL_goal = speed*(light_to_percentage(liL));
	draw_light(moR_goal, moL_goal);
	
	if(moR_cur < moR_goal){ // speeding up right, turning left
		moR_cur += (moR_goal - moR_cur) * factor;
	} else {
		moR_cur -= (moR_cur - moR_goal) * factor;
	}
	
	if(moL_cur < moL_goal){ // speeding up left, turning right
		moL_cur += (moL_goal - moL_cur) * factor;
	} else {
		moL_cur -= (moL_cur - moL_goal) * factor;
	}
}

/* \brief task_check
 * checks values and changes vehicle behaviour */
void task_check()
{
	if(son < 25){
		soundFX(00);
		correct_speed(0);
		if(moR_cur < 5 && moL_cur < 5){
			moR_cur = 0;
			moL_cur = 0;
		}
	} else {
		correct_speed(maxSpd);
	}
}

/* \brief update_screen
 * updates screen feedback */
void update_screen()
{
	nxtDisplayCenteredTextLine(2, "liR = %d", liR);
	nxtDisplayCenteredTextLine(3, "liL = %d", liL);
	nxtDisplayCenteredTextLine(4, "moR = %d", moR_cur);
	nxtDisplayCenteredTextLine(5, "Rgoal = %d", moR_goal);
	nxtDisplayCenteredTextLine(6, "moL = %d", moL_cur);
	nxtDisplayCenteredTextLine(7, "Lgoal = %d", moL_goal);
}

/* \brief main
 * main loop */
task main()
{
	// regulates speed of motors
	nMotorPIDSpeedCtrl[A] = mtrSpeedReg;
	nMotorPIDSpeedCtrl[B] = mtrSpeedReg;
	moR_cur = 0;
	moL_cur = 0;
	
	// main loop
	while(true){
		bluetooth();
		task_check();
		update_screen();
		wait1Msec(100);
	}
}