/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 3
/* --------------------------- */
/// @file
/// w4o3 Week 4 Opdracht 3
/// des

#include <stdio.h>
#include <stdlib.h>

void compress(char* src_filename, char* dest_filename){
	FILE* in_file = fopen(src_filename, "r");
	char str[100];
	fgets(str, 100, in_file);
	for(int i = 0; i < 100; i++){
		printf("%c", str[i]);
	}
}

int main(int argc, char* argv[])
{
	compress("opdracht_4_3.c","opdracht_4_3_compressed.c");
	return EXIT_SUCCESS;
}

