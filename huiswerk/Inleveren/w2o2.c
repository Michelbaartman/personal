/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 2
/* --------------------------- */

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week2 opdracht2\n");
	
	char arrayA[80];
	char arrayB[80];
	int size = 80;
	
	// asks user for input
	printf("input A = ");
	fgets(arrayA, 80, stdin);
	printf("input B = ");
	fgets(arrayB, 80, stdin);
	
	// checks when A != B, then prints index and breaks loop
	for(int c = 0; c < size; c++){
		if(arrayA[c] != arrayB[c]){
			printf("A(%c) verschilt hier met B(%c) op positie: %d", arrayA[c], arrayB[c], c);
			break;
		}
	}
	
	return 0;
}
