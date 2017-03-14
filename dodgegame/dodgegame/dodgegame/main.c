#include <wiringPi.h>
#include <stdio.h>
#include <wiringShift.h>

int main(int argc, char **argv)
{
    wiringPiSetupGpio();
    int ledMAtrix[2][4]= {
        {5,6,13,19},
        {12,16,20,21}};
    int i = 0;
    int j = 0;
    
    for(i; i < 2; i++){
        for(j = 0; j < 4; j++){
            pinMode(ledMatrix[i][j], OUTPUT);
            digitalWrite(ledMatrix[i][j], HIGH);
            delay(100);
            digitalWrite(ledAMtrix[i][j], LOW);
            delay(100);
        }
    }
    
    int button1 = 26;
    int button2 = 22;
    pinMode(button1, INPUT);
    pullUpDnControl(button1, PUD_UP);
    pinMode(button2, INPUT);
    pullUpDnControl(button2, PUD_UP);
    
    int player = ledMatrix[0][3];
    
    int blockX = 0;
    int blockY = 0;
    int block = ledMatrix[blockY][blockX];
    digitalWrite(player,1);
    
    int count = 0;
    while(1){
        if(count>50){
            digitalWrite(block, 0);
            if(blockY > 5){
                blockY = -1;
            }
            blockY ++;
            block = ledMatrix[0][blockY];
            digitalWrite(block, 1);
            count = 0;
        }
        if(digitalRead(button1)){
            digitalWrite(player, 0);
            player = ledMatrix[1][3];
            digitalWrite(player, 1);
        }else if(digitalRead(button2)){
            digitalWrite(player,0);
            player = ledMatrix[0][3];
            digitalWrite(player,1);
        }
        count++;
        delay(5);
    }
    
	return 0;
}
