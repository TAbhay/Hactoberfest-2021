#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#ifndef STACK_D
#define STACK_D

struct Stack_double   // double stack
{
    int top;
    unsigned capacity;
    double array[256];
};

struct Stack_double* createStack_d(unsigned capacity);

int isEmpty_d(struct Stack_double* stack);

double peek_d(struct Stack_double* stack);

double pop_d(struct Stack_double* stack);

void push_d(struct Stack_double* stack, double op);

struct Stack_double* createStack_d(unsigned capacity)
{
    struct Stack_double* stack = malloc(sizeof(struct Stack_double));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    //stack->array = malloc(stack->capacity *sizeof(int));

    return stack;
}
int isEmpty_d(struct Stack_double* stack)
{
    return stack->top == -1 ;
}
double peek_d(struct Stack_double* stack)
{
    return stack->array[stack->top];
}
double pop_d(struct Stack_double* stack)
{
    if (!isEmpty_d(stack))
        return stack->array[stack->top--] ;
    return -1.0000;
}
void push_d(struct Stack_double* stack, double op)
{
    stack->array[++stack->top] = op;
}

#endif
