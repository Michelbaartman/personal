#include <stdio.h>
#include <assert.h>
#include "stack.h"

void init_stack(Stack* ps)
{
    ps->top = -1;
}

void push(Stack* ps, int data)
{
    assert(ps->top < STACKSIZE-1);
    (ps->top)++;
    ps->a[ps->top] = data;
}

int pop(Stack* ps)
{
    assert(ps->top > -1 );
    int data = ps->a[ps->top];
    ps->top -= 1;
    return data;
}

void show(Stack s)
{
    if (s.top > -1) {
        printf("%d", (s.a)[s.top]);
        for (int i = (s.top)-1 ; i > -1; i--){
            printf("->%d", s.a[i]);
        }
            putchar('\n');
    } else {
        puts("empty stack");
    }
}