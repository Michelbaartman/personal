/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 3
/* --------------------------- */

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("week2 opdracht3\n");
	
	char arrayA[80];
	int size = 80;
	printf("input = ");
	fgets(arrayA, 80, stdin);
	
	// reverse with indices
	int count = 0;
	for(int c = 0; c < size; c++){
		count ++; // counts upwards to see how far the string goes, blocks it past the '\n'. alternative is '\0'
		if(arrayA[c] == '\n'){
			printf("reversed with indices: ");
			for(int c = count; c >= 0; c --){ // prints each character seperately in the row counting down.
				printf("%c", arrayA[c]);
			}
			putchar('\n');
			break;
		}
	}
	
    printf("\n## string = -, strlen = %d ##\n", strlen(arrayA))
    
	// reverse with pointers
	putchar('\n');
	
	char* pointer = arrayA; // creates a pointer that will be manipulated
	printf("\nreversed with pointers: \n");

	count = 0;
	while(count < size && arrayA[count] != '\n'){ // checks how far the array goes, saves the position of the pointer
		printf("pointer, value || %d, %c\n", pointer, *pointer);
		*pointer++;
		count++;
	}
	*pointer--; // while loop goes 1 too far, so this adjusts it for what we need.
	
	while(count > 0){ // prints pointer and value with backwards power.
		printf("pointer, value || %d, %c\n", pointer, *pointer);
		*pointer--;
		count --;
	}
	
	return 0;
}
