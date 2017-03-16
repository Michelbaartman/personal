#ifndef _STACK_H
#define _STACK_H
#define STACKSIZE 100

typedef struct {char a[STACKSIZE]; char top;} Stack;
void init_stack(Stack* ps);
void push(Stack* ps, int data);
char pop(Stack* ps);
void show(Stack s);
#endif /* _STACK_H */