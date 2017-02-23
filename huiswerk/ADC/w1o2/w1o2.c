/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 1 opdracht 2
/* --------------------------- */
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    printf("week 1 opdracht 2\n");
	
	input();
	return 0;
}

int input(void)
{
    printf("Input: ");
    int letter = getchar();
    // checks if the letter is usable
    while(letter != '\n'){
        // checks if the letter is uppercase, if yes: print its ascii hexdecimal.
        if(letter >= 'A' && letter <= 'Z'){
            putchar(letter);
            printf("(hdec) = %x\n",letter, letter);
        // checks if the letter is lowercase, if yes: print its ascii decimal.
        }else if(letter >='a' && letter <= 'z'){
            putchar(letter);
            printf("(dec) = %d\n",letter, letter);
        // if letter is anything other then upper or lowercase, just prints it as itself.
        }else{
            putchar(letter);
            printf("(self) = %c\n",letter, letter);
        }
        // gets a new letter
        letter = getchar();
    }
    
    printf("\n");
    return 0;
}