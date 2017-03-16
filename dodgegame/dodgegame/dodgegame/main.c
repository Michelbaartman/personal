#include <wiringPi.h>
#include <stdio.h>
#include <wiringShift.h>
#include <stdbool.h>

int ledMatrix[2][4][2] = { { {5,false},{6,false},{13,false},{19,false} }, { {12,false},{16,false},{20,false},{21,false} } };

void led_switch(int ledX, int ledY, char command) // s = switch, + = on, - = off
{
    int led = ledMatrix[ledX][ledY][0];
    int *led_state = ledMatrix[ledX][ledY][1];
    if(command == '+' && *led_state != true){ // turn led on
        digitalWrite(led, 1);
        led_state = true;
    } else if(command == '-' && *led_state != false){
        digitalWrite(led, 0);
        led_state = false;
    }
}

int main(int argc, char **argv)
{
    // layout led matrix
    wiringPiSetupGpio();
    
    // set led matrix
    int posX, posY;
    while(1){
        for(posX = 0; posX < 2; posX++){
            for(posY = 0; posY < 4; posY++){
                pinMode(ledMatrix[posX][posY][0], OUTPUT);
                led_switch(posX, posY, '+');
                delay(100);
                led_switch(posX, posY, '-');
                delay(100);
            }
        }
    }
    
    // block sequences
//    int blockSequence[1][2][4] = {
//        {1, 0, 0, 0}, {0, 0, 1, 1}
//    }
//    
//    int currentSequence[2][8] = {
//        {0, 1, 0, 1, 0, 0, 0, 0}, 
//        {0, 0, 0, 1, 0, 1, 0, 0}
//    }
    
    // setup player controls
//    int button1 = 26;
//    int button2 = 22;
//    pinMode(button1, INPUT);
//    pullUpDnControl(button1, PUD_UP);
//    pinMode(button2, INPUT);
//    pullUpDnControl(button2, PUD_UP);
//    
//    // player setup
//    int player = ledMatrix[0][3][0];
//    
//    // block setup
//    int blockX = 0;
//    int blockY = 0;
//    int block = ledMatrix[blockX][blockY][0];
//    digitalWrite(player,1);
//    digitalWrite(block, 1);
//    
//    // game loop
//    int count = 0;
//    int speed = 50;
//    while(1){
//        // track movement
////        if(count > speed){
////            for(int i = 0; i < 8; i++){
////            }
////        }
////        
//        // player input
//        if(digitalRead(button1)){
//            digitalWrite(player, 0);
//            player = ledMatrix[1][3][0];
//            digitalWrite(player, 1);
//        }else if(digitalRead(button2)){
//            digitalWrite(player,0);
//            player = ledMatrix[0][3][0];
//            digitalWrite(player,1);
//        }
//        
//        count++;
//        delay(5);
//    }
//    
	return 0;
}
