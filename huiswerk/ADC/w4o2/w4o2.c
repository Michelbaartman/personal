/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 2
/* --------------------------- */
/// @file
/// w4o2 Week 4 Opdracht 2
/// opens a file with a matrix. first determines the size of the matrix with read_size, then constructs the matrix with read_matrix.

#include <stdio.h>

/*! \brief read_size
 *  opens file, reads the amount of characters on the lines to determine the size of the matrix
 */
int read_size(const char* filename){
    FILE* in_file = fopen(filename, "r");
    char str[100];
    fgets(str, 100, in_file);
    fclose(in_file);
    printf("read_size() = %d\n", strlen(str)-1);
    return strlen(str)-1; // returns the matrix x size
}

/*! \brief read_matrix
 *  opens the file and starts constructing the matrix in a 2d [size]x[size] matrix.
 */
 
int read_matrix(const char* filename, int size, int matrix[][size])
{
    int c;
	int tempMatrix[size+1][size+1];
	
	// constructs the tempMatrix
    FILE* in_file = fopen(filename, "r");
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			c = fgetc(in_file);
			tempMatrix[i][j] = c;
		}
	}
	
	// reads the matrix
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%c", tempMatrix[i][j]);
		}
	}
	
	fclose(in_file);
	return tempMatrix; // returns tempMatrix
}

/*! \brief main
 *  nothing much, starts the read_matrix function.
 */
int main(int argc, char **argv)
{
	printf("Week 4 Opdracht 2\n");
    
    int matrix;
    read_matrix("binary_sudoku_puzzle.txt", read_size("binary_sudoku_puzzle.txt"), matrix);
    
	return 0;
}
