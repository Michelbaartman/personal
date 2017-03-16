#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "w5o2.h"


//w1o2 input code
int input(char* a[], int size)
{
    printf("Input: ");
    char* pointer = a;
    char letter = getchar();
    
    while(letter != '\n'){
        // gets a new letter
        *pointer = letter;
        letter = getchar();
        pointer ++;
    }
    *pointer = '\0';
    return 0;
}

// initialization of stack
void stack_init(Stack* st)
{
    // makes stack.top -1 (last in array)
    st->top = -1;
}

// adds something ontop of the stack
void stack_push(Stack* st, char data)
{
    assert(st->top < STACKSIZE-1);
    (st->top)++;
    // a = array in struct/object
    st->a[st->top] = data;
}

char stack_show(Stack st)
{
    if(st.top > -1){
        printf("%d", (st.a)[st.top]);
        putchar('\n');
    } else {
        puts("empty stack");
    }
}



int stringStacking(char* a[])
{
    Stack stack = {{0}, -1};
    int count = 0;
    char* p = a;
    
    while(*p != '\0'){
        if(*p == '(' || *p == '<' || *p == '[' || *p == '{'){
            // placed on stack
            stack_push(&stack, *p);
            printf("push[%c]\n", *p);
            stack_show(stack);
        }
//        if(*p == ')' || *p == '>' || *p == ']' || *p == '}'){
//            pop(&stack);
//            printf("pop[%c]\n", *p);
//            show(stack);
//        }
    }
}

int main(void)
{
    char string[100];
    int size = 100;
    input(string, size);
    for(int i = 0; i < strlen(string); i++){
        printf("%c", string[i]);
    }
    putchar('\n');
    printf("%s", string);
    stringStacking(string);
    return 0;
}
