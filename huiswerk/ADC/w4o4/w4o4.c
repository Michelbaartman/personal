/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 4
/* --------------------------- */
/// @file
/// w4o4 Week 4 Opdracht 4
/// Reads a file, then extracts any number values out of it.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*! \brief getIntegers
 *  extracts all the numbers from filename, then places them into int array a.
 */
int getIntegers(char* filename, int a[], int size){
	FILE* in_file = fopen(filename, "r");
	int* pointer = a;
	char c;
	int sum = 0;
	int count = 0;
	int neg = false;
	
	while(1){
		c = fgetc(in_file);
		if(c == EOF){ // breaks loop when end of file
			break;
		}
		
		if(c >= 49 && c <= 57){ //checks wether c is actually a number
			sum = sum*10 + ((int)c - 48);
		}else if(c == '-'){ //checks if c is '-', if so then the next value will be a negative value
			neg = true;
		}else{ //if c is not a number or a minus...
			if(neg == true){ //turn the number into a negative based on neg
				sum *= -1;
				neg = false;
			}
			if(sum != 0){ //if sum has a number, adds it to the array(with pointer) and puts the pointer onto the next spot in the array.
				*pointer = sum;
				count++;
				pointer ++;
			}
			sum = 0; //clears sum
		}
	}
	putchar('\n');
	
	return count; // returns amount of numbers in file.
}

/*! \brief main
 *  creates array a where we will save our numbers, n will get the amount of numbers. then prints a based on n.
 */
int main(void) {
	int a[100];
	int n = getIntegers("getallen.txt",a, 100);

	if (n > 0) {
		puts("gevonden getallen:");
		putchar('\n');
		for (int i = 0;i < n; i++){
			printf("%d ",a[i]);
		}
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

