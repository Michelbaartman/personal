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
	int bit = 0;
	for(int i = 0; i < 8 ; i++){
		if(ch & 0x80){
			if(i == n){
				bit = 1;
			}
			printf("1");
		} else {
			printf("0");
			bit = 0;
		}
		ch <<=1;
	}
	return bit;
}

/*! \brief verschuif_cyclisch
 *  move bits within char ch either with a negative or positive value, then return a new byte.
 */
char verschuif_cyclisch(char ch, int n){
	if(n > 0){ // Als n > 0 dan wordt n posities naar links geschoven. De weggevallen bits worden rechts teruggeplaatst.
		ch = (ch << n) | (ch >> (8-n));
	} else { // Als n < 0 dan wordt n posities naar rechts geschoven. De weggevallen bits worden links teruggeplaatst.
		ch = (ch >> n*-1) | (ch << (8-n)); // !!waarom werkt de vergelijking niet?
	}
	return ch;
}

int main(int argc, char **argv)
{
	printf("week 3 opdracht 5\n");
	
	//grabs the second bit from 'h'
	printf("get_bit()\n");
	printf("\n%d\n", get_bit('h', 0));
	
	//shuffles a bit within h to the left
	printf("verschuif_cyclisch()\n");
	char c = 'h';
	printf("\n%d\n", get_bit(c, 1));
	c = verschuif_cyclisch(c, 2);
	printf("\n%d\n", get_bit(c, 1));
	c = verschuif_cyclisch(c, -2);
	printf("\n%d\n", get_bit(c, 1));
}
