/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 1
/* --------------------------- */
/// @file
/// \mainpage w3o1 Week 3 Opdracht 1
/// A function to check the amount of times a number is in an array.

#include <stdio.h>
/*! \brief count
 *  counts the amount of times N within array a[].
 */
int count(int a[], int size, int n)
{
    int amount = 0;
    for(int count = 0; count < size; count ++){ // counts upwards til the given size is met
        if(a[count] == n){amount++;} // if the number is the same as the number we want to check, add 1 to amount
    }
    return amount; // returns amount of N recurring in a[]
}

/*! \brief count
 *  Makes array, sets a size we will use for the array and does some printing for clarity.
 */
int main(int argc, char **argv)
{
	printf("week3 opdracht1\n");
    
    int array[5] = {5,2,5,15,05}; // contains array of numbers we will check with count();
    int size = 5; // size of the array or the range in which we will check the array
    int num = 5; // the number we will look for in array[]
    
    printf("checking amount recurring %d in array:", num);
    for(int count = 0; count < size; count++){  // prints the array
        printf(" %d", array[count]);
    }
    printf("\namount recurring = %d", count(array, size, num)); // returns the recurring amount of variable num in array[]
    
	return 0;
}