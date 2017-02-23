/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 5
/* --------------------------- */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	printf("week 1 opdracht 5\n");
    
	printf("\noutput = %d",checkInput());
}

int checkInput(void)
{
	printf("input: ");
	
    char c = getchar();
    int sum = 0;
    bool neg = false;
    printf("\nc = %c,", c);
    printf("\nd = %d", sum);
    
    while(c != '\n'){
        if(c == '-'){
            neg = true;
            c = getchar();
        }else{
            putchar(c);
            sum = sum*10 + ((int)c - 48);
            printf("\nd = %d", sum);
            c = getchar();
        }
    }
    
    if(neg == true){
        sum *= -1;
    }
	
	return sum;
}