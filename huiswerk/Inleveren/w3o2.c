/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 2
/* --------------------------- */
/// @file
/// \mainpage w3o2 Week 3 Opdracht 2
/// A function to check if two arrays are identical to one another.

#include <stdio.h>
#include <stdbool.h>
/*! \brief equal_rows
 *  while counting upwards, if at one point in time a digit of array a1[] is not a2[] the function will return 'false'.
 */
bool equal_rows(int a1[], int a2[], int size)
{
     for(int count = 0; count < size; count++){ // goes by the given size, checks if a1[count] is equal to a2[count]
         if(a1[count] != a2[count]){
             return false;
         }
     }
     return true;
     
}

/*! \brief main
 *  basic main function, creates 2 arrays then calls the equal_rows function and prints either a true or false statement based on the return value.
 */
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
