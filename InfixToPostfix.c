//c program without pointer to convert infix to postfix
#include<stdio.h>
#include<ctype.h>
#define SPACE  ' ';

char stack[30];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

int main()
{
    char exp[20];
    char x;
    int i=0;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    while(exp[i] != '\0')
    {
        if(isalnum(exp[i]))
            printf("%c",exp[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        // else if(exp[i] == ' ')
        // {
        //     x = pop();
        // }
        else
        {
            while(precedence(stack[top]) >= precedence(exp[i]))
                printf("%c",pop());
            push(exp[i]);
        }
        i++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
    return 0;
}
