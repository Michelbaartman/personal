/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 4
/* --------------------------- */
/// @file
/// \mainpage w3o4 Week 3 Opdracht 4
/// A function to transpose a 2 dimensional array (otherwise refered to as a matrix).

#include <stdio.h>
#include <stdbool.h>

/*! \brief transpose_matrix
 *  transposes the given array matrix[], changing it to read from left to right to up and down.
 */
void transpose_matrix(int size, int matrix[][size])
{
	// print the matrix
	for(int countA = 0; countA < size; countA++){;
		for(int countB = 0; countB < size; countB++){
			printf("%d", matrix[countA][countB]);
		}
		printf("\n");
	}
	printf("\n");
	
	// converter
	int superCount = 0; // counts upward during (first) for loop
	for(int countA = 0; countA < size; countA++){
		for(int countB = superCount; countB < size; countB++){ // superCount changes startpoint to dodge overlapping exchanges.
			int temp = matrix[countA][countB];
			matrix[countA][countB] = matrix[countB][countA];
			matrix[countB][countA] = temp;
		}
		superCount ++;
	}
	
	// print the new converted matrix
	for(int countA = 0; countA < size; countA++){
		for(int countB = 0; countB < size; countB++){
			printf("%d", matrix[countA][countB]);
		}
		printf("\n");
	}
	return;
}

/*! \brief main
 *  creates a 2 dimensional array. then calls transpose_matrix with that array.
 */
int main(int argc, char **argv)
{
	printf("week 3 opdracht 4\n");
	
	// the matrix
	int matrix[3][3] = {{1, 1, 1}, {2, 2, 5}, {3, 3, 3}};
	
	printf("");
	transpose_matrix(3, matrix);
	return 0;
}
