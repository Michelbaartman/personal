/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 3 opdracht 5
/* --------------------------- */
/// @file
/// \mainpage w3o5 Week 3 Opdracht 5
/// This file consists of 2 functions: 1 allows you to get the current bit out of a given byte char, the other allows you to shuffle certain bits within the byte.

#include <stdio.h>
#include <stdbool.h>

/*! \brief get_bit
 *  returns either a 1 or a 0 based on the bit position (n) within the byte of the char (ch).
 */
int get_bit(char ch, int n){
	// returns bitdata n of byte ch. the bits are numbered from left to right (beginning with 0)
	for(int i = 0; i < 8 ; i++){
		if(i == n){ // if i reaches the given n (position in the byte), returns the value of the bit
			if(ch & 0x80){
				return 1;
			} else {
				return 0;
			}
		}
		ch <<=1;
	}
	return 0;
}

/*! \brief verschuif_cyclisch
 *  move bits within char ch either with a negative or positive value, then return a new byte.
 */
 
char verschuif_cyclisch(char ch, int n){
	// move bits within char ch either negative or positive based on n, then return new byte & char.
}

int main(int argc, char **argv)
{
	printf("week 3 opdracht 5\n");

	printf("%d", get_bit('h', 0));
	
	return 0;
}
