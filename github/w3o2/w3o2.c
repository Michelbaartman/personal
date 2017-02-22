/* student:     michel baartman
 * stunummer:   1696929
 * docent:      jorn bunk
 * opdracht:    week3 opdracht2 */

#include <stdio.h>
#include <stdbool.h>

bool equal_rows(int a1[], int a2[], int size)
{
     for(int count = 0; count < size; count++){ // goes by the given size, checks if a1[count] is equal to a2[count]
         if(a1[count] != a2[count]){
             return false;
         }
     }
     return true;
     
}

int main(int argc, char **argv)
{
	printf("week3 opdracht2\n");
    
    int arrayA[5] = {1, 2, 3, 4, 5};
    int arrayB[5] = {1, 2, 3, 4, 5};
    int arraySize = 5;
    
    bool arrayEqual = equal_rows(arrayA, arrayB, arraySize); // checks if arrayA and arrayB are equal. Saves the boolean state.
    if(arrayEqual==0){ // checks arrayEqual if true or false, then prints bool state.
        printf("equal rows = %d, false", arrayEqual);
    }else{
        printf("equal rows = %d, true", arrayEqual);
    }
    
	return 0;
}
