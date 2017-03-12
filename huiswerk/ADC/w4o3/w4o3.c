/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 3
/* --------------------------- */
/// @file
/// w4o3 Week 4 Opdracht 3
/// Removes tabs and enters from the file.

#include <stdio.h>
#include <stdlib.h>

/*! \brief compress
 *  grabs 2 filenames: one as source and other as destination. removes all tabs and enters from the file.
 */
void compress(char* src_filename, char* dest_filename){
	FILE* in_file = fopen(src_filename, "r");
	FILE* out_file = fopen(dest_filename, "w");
	char c;
	char previousC;
	
	while(1){
		c = fgetc(in_file);
		if(c == EOF){
			break;
		}
		
		if(c == '\n' && previousC == '\n' || c == '\t'){
			//printf("skip");
		}else{
			printf("%c",c);
			fputc(c, out_file);
		}
		previousC = c;
	}

	// Waarom werkt de statement hierboven wel met if(==) maar niet met die hieronder (!=)
	//	if(c != '\n' && previousC != '\n' || c != '\t'){
	//		printf("%c",c);
	//		fputc(c, out_file);
	//	}
}

/*! \brief main
 *  calls the function compress(), then returns that the operation is succesful.
 */
int main(int argc, char* argv[])
{
	compress("opdracht_4_3.c","opdracht_4_3_compressed.c");
	return EXIT_SUCCESS;
}

