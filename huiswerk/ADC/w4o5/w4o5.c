/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 4 opdracht 5
/* --------------------------- */
/// @file
/// w4o5 Week 4 Opdracht 5
/// Reads a file, then extracts any words out of it.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*! \brief getWordSize
 *  Goes by the document and figures out the length of the longest word
 */
int getWordSize(char* filename){
	FILE* in_file = fopen(filename, "r");
	char c;
	int count = 0;
	int max = 0;
	
	while(1){
		if(c == EOF){
			break;
		}
		c = fgetc(in_file);
		if(isalnum(c)){
			count ++;
		}else{
			if(count > max){
				max = count;
			}
			count = 0;
		}
	}
	fclose(in_file);
	return max;
}

/*! \brief getWords
 *  Goes by the ascii file and puts all words in an array. Words are build up from alphanumeric characters. max 1000 words & use isalnum();
 */
int getWords(char* filename, int word_size, char a[][word_size]){
	FILE* in_file = fopen(filename, "r");
	int* pointer = a;
	char c;
	int assembling = false;
	int count = 0;
	int arrayCount = 0;
	
	while(1){
		if(c == EOF){
			break;
		}
		c = fgetc(in_file);
		if(isalnum(c)){
			assembling = true;
			a[arrayCount][count] = c;
			count ++;
		}else{
			printf("%s", a[arrayCount]);
			if(assembling == true){
				arrayCount ++;
				assembling = false;
			}
			putchar(' ');
			count = 0;
		}
	}
	return arrayCount;
}

/*! \brief getWords
 *  simple main that prints words found with getWords();
 */
int main(void) {
	int word_size = getWordSize("week4opdracht5.txt");
	// lees de hele file voor het bepalen van de lengte van het langste woord
	char a[1000][word_size];
	int n = getWords("week4opdracht5.txt", word_size, a);
	
	if (n > 0){
		puts("gevonden woorden:");
		for (int i = 0;i < n; i++){
			printf("%3d %s\n",i,a[i]);
		}
	}

	return 0;
}