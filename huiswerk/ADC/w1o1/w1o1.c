/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 1
/* --------------------------- */
#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    printf("week 1 opdracht 1\n");
	
	// asks for 2 inputs for a & b
	int a = checkInput();
	int b = checkInput();
	// sums up a & b
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);
    
	return 0;
}

int checkInput()
{
    int input;
    
    printf("Input : ");
    // checks if scanf records a %d, if not: errors and asks for a new input
    while(!scanf("%d", &input)){
        printf("\nerror: not an int");
        while(getchar() != '\n');
        printf("\nInput : ");
    }
    // flushes the buffer 1 by 1
    while(getchar() != '\n');
    
    return input;
}