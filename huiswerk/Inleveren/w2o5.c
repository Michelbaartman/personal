/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 4
/* --------------------------- */

#include <stdio.h>

void printMatrix(int matrix[], int size){
	int* pointerX = matrix;
	// goes by the matrix[] array and creates a grid based on the given size
	for(int count1 = 0; count1 < size; count1++){
		for(int count2 = 0; count2 < size; count2++){
			if(*pointerX == -1){ // if the value is -1, prints a "-" instead of "-1"
				printf("-");
			}else{ // else print the value as is
				printf("%d", *pointerX);  
			}
			pointerX ++; // push the pointerX value to pick up the next part of the given matrix
		}
		putchar('\n');
	}
	
	return 0;
}

int main(int argc, char **argv)
{
	printf("week2 opdracht4\n");
	
	// set matrix variables
	int size = 10;
	int matrix[][10] = {
		{-1,-1,-1,-1,-1,-1, 0, 1,-1, 1},
		{ 1,-1,-1,-1,-1,-1,-1,-1,-1, 1},
		{-1,-1, 0,-1, 1,-1,-1,-1,-1,-1},
		{-1,-1,-1,-1, 0,-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1,-1, 0,-1,-1, 1},
		{-1,-1,-1,-1,-1, 1,-1,-1, 1,-1},
		{-1,-1,-1,-1,-1,-1, 0,-1,-1, 0},
		{ 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
		{-1,-1, 1, 1,-1,-1,-1,-1,-1, 1},
		{ 0,-1, 1,-1,-1,-1,-1,-1, 0,-1}};

	printMatrix(matrix, 10);
	
	return 0;
}
