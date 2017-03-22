/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 5 opdracht 3
/* --------------------------- */
/// @file
/// w5o3 Week 5 Opdracht 3
/// Contains a queueing system.

#include <stdio.h>
#include "queue.h"

/*! \brief main
 *  Plays around with the queueing system a bit by adding and removing ints.
 */
int main(int argc, char **argv)
{
	Queue mainQueue = {{0}, 0, -1};
	
	enqueue(&mainQueue, 5);
	enqueue(&mainQueue, 2);
	enqueue(&mainQueue, 4);
	dequeue(&mainQueue);
	enqueue(&mainQueue, 9);
	dequeue(&mainQueue);
	show(mainQueue);
	return 0;
}
