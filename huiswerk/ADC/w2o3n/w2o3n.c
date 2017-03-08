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
    for(int c = 0; c <= length/2; c++){
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
	
    char *ps = arrayA;
    for(int i = 0; i < length/2; i++){
        char *pe = arrayA + length - i;
        char temp = *ps;
        *ps = *pe;
        *pe = temp;
        ps++;
    }
    
    // prints pointer array
    for(int c = 0; c <= length; c++){
        printf("%c", arrayA[c]);
    }
    
	return 0;
}
