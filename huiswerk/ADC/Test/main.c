#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <Windows.h>
#include <unistd.h>

float int_to_float(int i)
{
	return i;
}

float lv_to_percentage(int value)
{
	return ((value-25)/4.50)/10.00;
}

int main(int argc, char **argv)
{
	int spd = 70;
	int curSpd = 0;
	int li = 66;
	float factor = 0.4;
	
	float bvalue = lv_to_percentage(li);
	
	printf("spd = %d, li = %d, bval = %f\n", spd, li, bvalue);
	
	int count = 0;
	int goal = spd*bvalue;
	
	printf("-speeding up-\n");
	while(curSpd < goal){
		printf("[curSpd = %d, goal = %d]\n",curSpd, goal);
		curSpd += (goal - curSpd)*factor;
		Sleep(50);
		count ++;
		if(count > 10){
			break;
		}
	}
	
	count = 0;
	printf("-slowing down-\n");
	li = 32;
	bvalue = lv_to_percentage(li);
	goal = spd*bvalue;
	printf("spd = %d, li = %d, bval = %f\n", spd, li, bvalue);
	while(curSpd > goal){
		printf("[curSpd = %d, goal = %d]\n",curSpd, goal);
		curSpd -= (curSpd - goal)*factor;
		Sleep(50);
		count ++;
		if(count>10){
			break;
		}
	}
	
	count = 0;
	printf("-slowing down-\n");
	li = 22;
	bvalue = lv_to_percentage(li);
	goal = spd*bvalue;
	printf("spd = %d, li = %d, bval = %f\n", spd, li, bvalue);
	while(curSpd > goal){
		printf("[curSpd = %d, goal = %d]\n",curSpd, goal);
		curSpd -= (curSpd - goal)*factor;
		Sleep(50);
		count ++;
		if(count>10){
			break;
		}
	}
	
	
	
	return 0;
}
