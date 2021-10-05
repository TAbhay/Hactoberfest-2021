#ifndef STACK_S
#define STACK_S

struct Stack_string   // string stack
{
    int top;
    unsigned capacity;
    char array[256][256];
};

struct Stack_string* createStack_s(unsigned capacity);

int isEmpty_s(struct Stack_string* stack);

char *peek_s(struct Stack_string* stack);

char *pop_s(struct Stack_string* stack);

void push_s(struct Stack_string* stack, char* op);

struct Stack_string* createStack_s(unsigned capacity)
{
    struct Stack_string* stack = malloc(sizeof(struct Stack_string));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    return stack;
}
int isEmpty_s(struct Stack_string* stack)
{
    return stack->top == -1 ;
}
char *peek_s(struct Stack_string* stack)
{
    return stack->array[stack->top];
}
char *pop_s(struct Stack_string* stack)
{
    if (!isEmpty_s(stack))
        return stack->array[stack->top--] ;
    return NULL;
}
void push_s(struct Stack_string* stack, char* op)
{
    /*char temp[256];
    strcpy(temp,op);
    stack->array[++stack->top] = &op;*/
    strcpy(stack->array[++stack->top],op);

}


#endif
