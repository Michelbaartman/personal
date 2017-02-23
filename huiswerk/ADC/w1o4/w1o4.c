/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 4
/* --------------------------- */
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week 1 opdracht 4\n");
	
	int v = checkInput("value: ");
	tableSum(v);
}

// prints a table(up to 10) based on value.
void tableSum(int value)
{
    // checks if value is higher then 0 or lower then 100
    if(value > 0 && value <= 100){
        // prints the table
        for(int i = 0; i <= 10; i++){
            int sum = value * i;
            printf("%2d * %3d = %4d\n", value, i, sum);
        }
    }else{
        printf("Error: number negative or above 100.\n");
    }
    return 0;
}

// code of w1o1, asks for an int input.
int checkInput(char *varName)
{
    int input;
    
    printf("Input %s: ", varName);
    // checks if scanf records a %d, if not: errors and asks for a new input
    while(!scanf("%d", &input)){
        printf("\nerror: not an int");
        while(getchar() != '\n');
        printf("\nInput %s: ", varName);
    }
    // flushes the buffer 1 by 1
    while(getchar() != '\n');
    
    return input;
}