/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 3
/* --------------------------- */
/// @file
/// \mainpage w3o3 Week 3 Opdracht 3
/// A series of functions to check the integrity of an array.
/// Checks wether the array only consists of '1' and '0', if the amount of 1 is equal to the amount of 0 and wether either of them are placed 3 times in a row.

#include <stdio.h>
#include <stdbool.h>

/*! \brief count
 *  counts the amount of times N within array a[].
 */
int count(int a[], int size, int n)
{
    int amount = 0;
    for(int count = 0; count < size; count ++){ // counts upwards til the given size is met
        if(a[count] == n){ // if the number is the same as the number we want to check, add 1 to amount
			amount++;
		}
    }
    return amount; // returns amount of N recurring in a[]
}

/*! \brief bit_check
 * checks wether the array exists of 1's or 0's.
 * if the array has a number higher then 1 then it returns false. otherwise true.
 */
bool bit_check(int a[], int size){
	// for each int in array
	// if int > 1 then return false
	// else return true
	
	for(int count = 0; count < size; count ++){
		if(a[count] > 1){
			return false;
		}
	}
	return true;
}

/*! \brief count_check
 * checks wether the array has an even number of 1's and 0's.
 * Returns a false if not, otherwise true.
 */
bool count_check(int a[], int size){
	// for each int in array
	// check 0's & 1's 
	// if amount 0 equals 1 return true
	// else return false
	
	int countOne = count(a, size, 1);
	int countZero = count(a, size, 0);
	if(countOne == countZero){
		return true;
	}
	return false;
}

/*! \brief recur_check
 * Checks wether any diget in the array appears more then 3 times in a row. if one does, return false. otherwise returns true.
 */
bool recur_check(int a[], int size){
	// count ++ for each time same number
	// if count => 3 then break and return false
	// else return true.
	
	int sameCount = 0;
	int hold = a[0];
	for(int count = 0; count < size; count ++){
		if(a[count] == hold){
			sameCount ++;
		} else {
			sameCount = 1;
		}
		
		if(sameCount > 2){
			return false;
		}
		
		hold = a[count];
	}
	
	return true;
}

/*! \brief valid_row
 * goes by the bit_check, count_check and recur_check functions with the given array, then checks if all return values are true.
 * if they are, returns true, otherwise false.
 */
bool valid_row(int a[], int size){
	// check if only 1 and 0 in array
	bool bitCheck = bit_check(a, size);
	printf("\nbit_check = [%d] (0 = False, 1 = True)", bitCheck);
	
	// if amount 1 and 0 is equal (use count function)
	bool countCheck = count_check(a, size);
	printf("\ncount_check = [%d] (0 = False, 1 = True)", countCheck);
	
	// if 1 and 0 not recur 3 times in a row
	bool recurCheck = recur_check(a, size);
	printf("\nrecur_check = [%d] (0 = False, 1 = True)", recurCheck);
	// return true or false based on 3 bool checks
	if(bitCheck == true && countCheck == true && recurCheck == true){
		return true;
	}
	return false;
}

/*! \brief main
 * creates (2) arrays and prints them, calls the valid_row for each of the arrays and checks wether they are valid or not.
 */
int main(int argc, char **argv)
{
	printf("week3 opdracht3\n");
    
    int array[6] = {1,1,0,0,1,0}; // contains array of numbers we will check with count();
    int size = sizeof(array)/4; // size of the array or the range in which we will check the array
    
    printf("checking array: ");
    for(int count = 0; count < size; count++){  // prints the array
        printf("%d ", array[count]);
    }
	
	printf("\nvalid_row = [%d] (0 = False, 1 = True)", valid_row(array, size));
	
	int arrayB[6] = {1,1,1,0,0,5};
	
    printf("\n\nchecking arrayB: ");
    for(int count = 0; count < size; count++){  // prints the array
        printf("%d ", arrayB[count]);
    }
	
	printf("\nvalid_row = [%d] (0 = False, 1 = True)", valid_row(arrayB, size));
	
	return 0;
}

