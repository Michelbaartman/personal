/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 5 opdracht 2
/* --------------------------- */
/// @file
/// w5o1 Week 5 Opdracht 2
/// Contains a Stack struct for... stacking purposes. allows for stacking of characters.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
// #include "w5o2.h"

#define STACKSIZE 100
typedef struct {char* a[STACKSIZE]; char top;} Stack;

/*! \brief stack_push
 *  adds something ontop of a stack.
 */
void stack_push(Stack* st, char data)
{
    assert(st->top < STACKSIZE-1);
    (st->top)++;
    // a = array in struct/object
    st->a[st->top] = data;
}

/*! \brief stack_show
 *  shows the current contents of a stack.
 */
char stack_show(Stack st)
{
    if(st.top > -1){
        printf("[%c]", (st.a)[st.top]);
		for(int i = (st.top)-1; i>-1; i--){
			printf("->[%c]", st.a[i]);
		}
        putchar('\n');
    } else {
		putchar('\n');
        puts("empty stack");
    }
}

/*! \brief stack_pop
 *  removes the current top of the stack.
 */
char stack_pop(Stack* st)
{
	assert(st->top > -1);
	char data = st->a[st->top];
	st->top -= 1;
	return data;
}


/*! \brief stringStacking
 *  grabs a char array, then stacks ( < [ { ontop of one another. afterwards pops them out again one by one.
 */
int stringStacking(char* a[])
{
	putchar('\n');
	printf("stringStacking...");
	putchar('\n');
    Stack stack = {{0}, -1};
    int count = 0;
    char* p = a;
	char* pPrev = p;
	
    while(*p != '\0'){
        if(*p == '(' || *p == '<' || *p == '[' || *p == '{'){
            // placed on stack
            stack_push(&stack, *p);
			// show top of stack
            stack_show(stack);
        } else if(*p == ')' && *pPrev == '(' || *p == '>' && *pPrev == '(' || *p == ']' && *pPrev == '(' || *p == '}' && *pPrev == '('){
			// pops from stack
			stack_pop(&stack);
			stack_show(stack);
		} else{ // if invalid, breaks loop.
			printf("found a invalid char in string, stopping stringStacking...");
			break;
		}
		pPrev = p;
		p ++;
    }
	putchar('\n');
	putchar('\n');
}

/*! \brief main
 *  creates 3 strings, then calls stringStacking with each of them.
 */
int main(void)
{
    char string1[STACKSIZE] = {"((<<>>))"};
	char string2[STACKSIZE] = {"[<{<()>}>]"};
	char string3[STACKSIZE] = {"( ͡° ͜ʖ ͡°)"};
	
	printf("input = %s", string1);
    stringStacking(string1);
	
	printf("input = %s", string2);
	stringStacking(string2);
	
	printf("input = %s", string3);
	stringStacking(string3);
	
    return 0;
}
