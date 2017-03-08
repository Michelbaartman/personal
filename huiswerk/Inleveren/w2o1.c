/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 1
/* --------------------------- */

#include <stdio.h>
#include <stdbool.h>

bool arrayCheck(int array[], int size)
{
	int sum0 = 0;
	int sum1 = 0;
	// for loop to check how many 0's and 1's there are in array[]
	for(int count = 0; count < size; count++){
		if(array[count] == 0){
			sum0 ++;
		}else{
			sum1 ++;
		}
	}
	// if amount 0 equals amount 1, return true. else false
	if(sum0 == sum1){
		return true;
	}
	return false;
}

int main(int argc, char **argv)
{
	printf("week2 opdracht1\n");
	
	int arrayA[10] = {0,0,1,0,0,0,0,0,0,0};
	int arrayB[10] = {1,1,1,1,1,0,0,0,0,0};
	int size = 10;
	
	// calls arrayCheck on given arrays to check amount 0 equals amount 1
	// checking arrayA
	for(int count = 0; count < 10; count++){
		printf("%d", arrayA[count]);
	}
	printf("\nsame ratio 0:1 = %d\n", arrayCheck(arrayA, size));
	
	// checking arrayB
	for(int count = 0; count < 10; count++){
		printf("%d", arrayB[count]);
	}
	printf("\nsame ratio 0:1 = %d\n", arrayCheck(arrayB, size));
	
	return 0;
}
