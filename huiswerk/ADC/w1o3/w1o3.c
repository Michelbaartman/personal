/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 3
/* --------------------------- */
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week 1 opdracht 3\n");
    whileLoop(20);
    forLoop(5);
    
	return 0;
}

// creates a wave of *s through the use of while loops.
void whileLoop(int amount)
{
    int n = amount;
    int count = 0;
    int count2 = 0;
    
    printf("\nwhile loop\n\n");
    // wave upwards loop
    while(count < n){
        count++;
        while(count2 < count){
            count2++;
            printf("*");
        }
        count2 = 0;
        printf("\n");
    }
    
    count = 0;
    count2 = n;
    // wave downwards loop
    while(count < n){
        count++;
        while(count2 > count){
            count2 --;
            printf("*");
        }
        count2 = n;
        printf("\n");
    } 
}

// Creates a wave of *'s through the use of for loops.
void forLoop(int amount)
{
    printf("\nfor loop\n\n");
    // wave upwards
    for(int count=0; count<amount; count++){
        for(int count2=0; count2 < count; count2++){
            printf("*");   
        }
        printf("\n");
    }
    // wave downwards
    for(int count=0; count < amount; count++){
        for(int count2=amount; count2 > count; count2--){
            printf("*");   
        }
        printf("\n");
    }
}
