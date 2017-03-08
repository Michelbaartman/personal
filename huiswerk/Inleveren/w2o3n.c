/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 3
/* --------------------------- */

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week2 oppdracht3\n");
    
    // reverse input with indices
    char arrayA[80];
    printf("input = ");
    fgets(arrayA, 80, stdin);
    int length = strlen(arrayA)-2;

    char temp;
    // for loop on length of arrayA, puts last letter as temp then 
    // replaces last with the first, then the first with temp.
    for(int c = 0; c <= (length)/2; c++){
        temp = arrayA[length-c];
        arrayA[length-c] = arrayA[c];
        arrayA[c] = temp;
    }
    
    // prints indices array
    for(int c = 0; c <= length; c++){
        printf("%c", arrayA[c]);
    }
    
    // reverse with pointers
    printf("\ninput = ");
    fgets(arrayA, 80, stdin);
    length = strlen(arrayA)-2;
    
    
    char *pointer = arrayA + length; // grabs the last pointer of the array, then counts down
	
	printf("\np, v | %d, %c", pointer, arrayA[length]);
	*pointer = arrayA;
	printf("\np, v | %d, %c", pointer, arrayA[0]);
	*pointer--;
	*pointer = arrayA - 1;
	printf("\np, v | %d, %c", pointer, arrayA[length-1]);
	
//	for(int c = 0; c >= length; c++){
//		*pointer = arrayA 
//		printf("\np, v | %d, %c", pointer, arrayA[0]);
//	}
	
//    for(int c = length; c >= 0; c--){ // put char in temp, then copy char of first pointer?
//        printf("\np, v | %d, %c", pointer, *pointer);
//        *pointer--;
//    }
    
	return 0;
}
