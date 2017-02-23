/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 3
/* --------------------------- */

#include <stdio.h>
#include <stdbool.h>

bool valid_row(int a[], int size)
{
    printf("func valid_row();\n");
    /* rij bevat alleen 0 en 1
     * aantal 1 == aantal 0
     * geen getallen vaker dan 3x voor
     */ 
     
     for(int count = 0; count < size; count++){
         
     }
}


int main(int argc, char **argv)
{
	printf("week3 opdracht3\n");
    
    int array[5] = {0,1,0,1,2};
    int size = 5;
    
    valid_row(array, size);
    
	return 0;
}
