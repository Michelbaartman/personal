/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 1
/* --------------------------- */
/// @file
/// w4o2 Week 4 Opdracht 1
/// Opens 2 .txt files and reads them out and places them in a string.
/// Afterward compares the values of the strings if they are equal.
/// if they are not, the program prints an error and location of the characters.

#include <stdio.h>

/*! \brief check
 *  compares the first line in 2 files and checks if they are the same. if they are, return 0, otherwise returns 1.
 */
int check(char* file1, char* file2)
{
    // opens file1 and file 2
    FILE* in_file1 = fopen(file1, "r");
    FILE* in_file2 = fopen(file2, "r");
    printf("setting variables\n");
    char str_file1[100];
    char str_file2[100];
    int state = 0;
    
    // grabs the first line of file1 and 2
    fgets(str_file1, 100, in_file1);
    fgets(str_file2, 100, in_file2);
    printf("\n%s", str_file1);
    printf("\n%s\n", str_file2);
    
    // checks for irregularities between str_file1 and str_file2. prints error with information
    for(int i = 0; i < strlen(str_file1); i++){
        if(str_file1[i] != str_file2[i]){
            fprintf(stderr, "\n[error][File not the same: %c != %c @ pos %d.]", str_file1[i], str_file2[i], i+1);
            state = 1; // this is what we'll return at the end of the function.
        }
    }
    
    fclose(in_file1);
    fclose(in_file2);
    return state;
}

/*! \brief main
 *  prints the return of check()
 */
int main(int argc, char **argv)
{
	printf("Week 4 Opdracht 1\n");
    printf("\nreturn : %d", check("text1.txt", "text2.txt"));
    return 0;
}
