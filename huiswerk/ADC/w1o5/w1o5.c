/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 5
/* --------------------------- */

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week 1 opdracht 5\n");
    
	printf("%d",checkInput());
}

int checkInput(void)
{
	char str[4];
	char c;
	int size = 4;
	
	// ask for user input
	printf("input (max 4 char): ");
	
	// for loop to fill the array str with getchar
	for(int count = 0; count < size; count ++){
		c = getchar();
		if(c == '\n'){
			size = count;
			break;
		}
		str[count] = c;
	}
	
	str[size] = '\0';
	
	// converts array str to an int
	int sum = 0;
	for(int count = 0; count < size; count++){
		sum = sum * 10 + ((int)str[count] - 48);
	}
	
	return sum;
}