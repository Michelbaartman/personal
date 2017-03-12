/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 2
/* --------------------------- */
/// @file
/// w4o2 Week 4 Opdracht 2
/// description

#include <stdio.h>

int read_size(const char* filename){
    FILE* in_file = fopen(filename, "r");
    char str[100];
    fgets(str, 100, in_file);
    fclose(in_file);
    printf("read_size() = %d\n", strlen(str)-1);
    return strlen(str)-1;
}

int read_matrix(const char* filename, int size, int matrix[][size])
{
    int c;
    FILE* in_file = fopen(filename, "r");
    for(int i = 0; i < (size*size+size); i++){
        c = fgetc(in_file);
        printf("%c", c);
    }
}

int main(int argc, char **argv)
{
	printf("Week 4 Opdracht 2\n");
    
    int matrix;
    read_matrix("binary_sudoku_puzzle.txt", read_size("binary_sudoku_puzzle.txt"), matrix);
    
	return 0;
}
