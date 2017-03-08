/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 2 opdracht 4
/* --------------------------- */

#include <stdio.h>

typedef struct voorwerp
{
	int nummer;
	char naam[20];
	double gewicht, lengte;
} VOORWERP; // name of the struct

int main(int argc, char **argv)
{
	printf("week2 opdracht4\n");
	
	// creates a struct, then prints various information within the newly made variable
	VOORWERP stoel = {423, "stoel", 4.5, 90};
	printf("%s heeft nummer %d, weegt %lf kg en is %lf cm.", stoel.naam, stoel.nummer, stoel.gewicht, stoel.lengte);
	
	return 0;
}
