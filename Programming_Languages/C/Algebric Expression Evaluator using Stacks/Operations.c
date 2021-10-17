#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "stack_s.h"
#include "stack_d.h"
#include "Operations.h"


int Prec(char* ch)                                               // to check precedence of operators
{
    char temp = ch[0];
    switch (temp)
    {
    case '+':
    case '-':
        return 0;

    case '*':
    case '/':
        return 1;

    case '^':
        return 2; // right associative

    case '@':
    case '#':
        return 3; // right associative
    }
    return -1;
}

int isBinaryop(char* ch)                                         //to check for a binary operator
{
    if((Prec(ch) == 0) || (Prec(ch) == 1) || (Prec(ch) == 2))
        return 1;
    return 0;
}

int isUnaryop(char* ch)                                          //to check for a unary operator
{
    if(Prec(ch) == 3)
        return 1;
    return 0;
}

int isLeftAsop(char* ch)                                         //to check for a left associative operator
{
    if((Prec(ch) == 0) || (Prec(ch) == 1))
        return 1;
    return 0;
}

int isRightAsop(char* ch)                                        //to check for a right associative operator
{
    if((Prec(ch) == 2) || (Prec(ch) == 3))
        return 1;
    return 0;
}

int isOperand(char* ch)                                          //to check for a operand
{
    if ((Prec(ch) == 1) || (Prec(ch) == 2) || (Prec(ch) == 3) || (Prec(ch) == 0) || (ch[0] == '(') || (ch[0] == ')'))
    {
        return 0;
    }
    return 1;
}

int iswhitespace(char ch)                                       // checks for whitespaces
{
    if ((ch == ' ') || (ch == '\t'))
    {
        return 1;
    }
    return 0;
}

char* removeextrawhitesp(char* source, char* destination)       // removes excess whitespaces from expression
{
    int i =0,j = 0,k=0;

    char temp_new[256];
    temp_new[0] = '\0';

    for(i =0,j=0 ; i <strlen(source); i++)
    {
        char sty[2] = {source[i],'\0'};
        char open_br[2] = {'(','\0'};
        char close_br[2] = {')','\0'};
        char sq_openbr[2] = {'[','\0'};
        char sq_closebr[2] = {']','\0'};
        char cu_openbr[2] = {'{','\0'} ;
        char cu_closebr[2] = {'}','\0'};


        if((Prec(sty) != -1 ) || (!strcmp(sty,open_br)) || (!strcmp(sty,close_br)) || (!strcmp(sty,sq_openbr)) || (!strcmp(sty,sq_closebr)) || (!strcmp(sty,cu_openbr)) || (!strcmp(sty,cu_closebr)))
        {
            if(!iswhitespace(source[i-1]))
            {
                temp_new[j++] = ' ';
            }

                temp_new[j++] = source[i];

            if(!iswhitespace(source[i+1]))
            {
                temp_new[j++] = ' ';
            }
        }
        else
        {
            temp_new[j++] = source[i];
        }
    }

    temp_new[j] = '\0';

    i=0,j=0,k=0;

    while (iswhitespace(temp_new[k]))
    {
        k++;
    }

    for(i =k ; i <strlen(temp_new); i++)
    {
        if(iswhitespace(temp_new[i]))
        {
            if(iswhitespace(destination[j-1]))
            {
                continue;
            }
            else
            {
                destination[j++] = temp_new[i];
            }
        }
        else
        {
            destination[j++] = temp_new[i];
        }
    }

    if(iswhitespace(destination[j-1]))
    {
        destination[j-1] = '\0';
    }
    else
    {
        destination[j] = '\0';
    }

    return destination;

}

char *InfixToPostfix(char *source, char *destination)           // convert infix to postfix
{
    char sp[2] = {' ','\0'};                                    // whitesapce 'string'

    destination[0] = '\0';                                      // ensuring no garbage gets taken by string

    int i,j;

    char temp_s[256], temp_unary[256];

    temp_s[0] = '\0';
    temp_unary[0] = '\0';

    removeextrawhitesp(source,temp_unary);                        // removes excess whitespace from input string
    CheckUnary(temp_unary,temp_s);

    for(i=0; temp_s[i]; i++)                                // to normalize all brackets
    {
        if((temp_s[i] == '[') || (temp_s[i] == '{'))
        {
            temp_s[i] = '(';
        }
        else if((temp_s[i] == ']') || (temp_s[i] == '}'))
        {
            temp_s[i] = ')';
        }
    }

    struct Stack_string* stack = createStack_s(strlen(source));    // initializing a stack
    if(!stack)
        return NULL ;

    char t[256];

    for(i=0; i<strlen(temp_s); i++)                           // primary loop to run through various operations
    {


        for ( j= 0; (!iswhitespace(temp_s[i])); j++)                // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i++];
        }

        t[j] = '\0';

        if (isOperand(t))                                            // checks for operand
        {
            strcat(destination,t);
            strcat(destination,sp);
        }


        else if ((t[0] == '(') && (t[1] == '\0'))                    // condition for an opening parenthesis
        {
            push_s(stack, t);
        }

        else if ((t[0] == ')') && (t[1] == '\0'))                    // condition for an closing parenthesis
        {
            while (peek_s(stack)[0] != '(')
            {
                strcat(destination,pop_s(stack));
                strcat(destination,sp);

            }
            pop_s(stack);
        }
        else                                                         // condition for an operator
        {
            if(isEmpty_s(stack))                                     // if stack is empty
            {
                push_s(stack,t);

            }
            else if (isLeftAsop(t))                                  // condition for left associative operator
            {
                while(Prec((peek_s(stack))) >= Prec(t))
                {
                    strcat(destination,pop_s(stack));
                    strcat(destination,sp);

                }
                push_s(stack, t);

            }
            else if (isRightAsop(t))                                // condition for right associative operator
            {
                while(Prec((peek_s(stack))) > Prec(t))
                {
                    strcat(destination,pop_s(stack));
                    strcat(destination,sp);
                }
                push_s(stack, t);
            }

        }
    }

    while (!isEmpty_s(stack))                                       // pop till stack is empty
    {
        strcat(destination,pop_s(stack));
        strcat(destination,sp);
    }

    destination[strlen(destination)- 1] = '\0';                      // removes the extra whitespace character at the end

    return destination;
}

char  *InfixToPrefix(char *source, char *destination)           // convert infix to prefix
{
    char sp[2] = {' ','\0'};                                     // whitesapce 'string'

    destination[0] = '\0';                                       // ensuring no garbage gets taken by string

    int i,k,j;

    char temp_s[256], temp_unary[256];

    temp_s[0] = '\0';
    temp_unary[0] = '\0';

    removeextrawhitesp(source,temp_unary);                         // removes excess whitespace from input string
    CheckUnary(temp_unary,temp_s);

    for(i=0,k=-1; temp_s[i]; i++)                                     // to normalize all brackets
    {
        if((temp_s[i] == '[') || (temp_s[i] == '{'))
        {
            temp_s[i] = '(';
        }
        else if((temp_s[i] == ']') || (temp_s[i] == '}'))
        {
            temp_s[i] = ')';
        }
    }

    struct Stack_string* stack = createStack_s(strlen(source));        // initializing a stack
    if(!stack)
        return NULL ;

    char t[256];

    for(i=strlen(temp_s)-1,k =-1; i>=0; i--)                           // primary loop to run through various operations
    {


        for ( j= 0; ((!iswhitespace(temp_s[i])) && (i != -1)); j++)    // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i--];
        }

        t[j] = '\0';



        if (isOperand(t))                                               // checks for operand
        {
            strcat(destination,t);
            strcat(destination,sp);


        }


        else if ((t[0] == ')') && (t[1] == '\0'))                  // condition for an opening parenthesis
        {
            push_s(stack, t);


        }

        else if ((t[0] == '(') && (t[1] == '\0'))                  // condition for an closing parenthesis
        {
            while (peek_s(stack)[0] != ')')
            {
                strcat(destination,pop_s(stack));
                strcat(destination,sp);

            }
            pop_s(stack);
        }
        else                                                       // condition for an operator
        {
            if(isEmpty_s(stack))                                   // if stack is empty
            {
                push_s(stack,t);



            }
            else if (isLeftAsop(t))                                // condition for left associative operator
            {
                while(Prec((peek_s(stack))) > Prec(t))
                {
                    strcat(destination,pop_s(stack));
                    strcat(destination,sp);

                }
                push_s(stack, t);



            }
            else if (isRightAsop(t))                               // condition for right associative operator
            {
                while(Prec((peek_s(stack))) >= Prec(t))
                {
                    strcat(destination,pop_s(stack));
                    strcat(destination,sp);
                }
                push_s(stack, t);
            }

        }
    }

    while (!isEmpty_s(stack))                                      // pop till stack is empty
    {
        strcat(destination,pop_s(stack));
        strcat(destination,sp);
    }

    destination[strlen(destination)- 1] = '\0';                    // removes the extra whitespace character at the end

    strrev(destination);                                           // reverses the string


    return destination;
}



char  *PostfixToPrefix(char *source, char *destination)          // convert postfix to prefix
{
    char sp[2] = {' ','\0'};                                     // whitespace string

    destination[0] = '\0';                                       // ensuring no garbage gets taken by string

    int i,k,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                             // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(source,temp_s);                         // removes excess whitespace from input string

    struct Stack_string* stack = createStack_s(strlen(source));   // initializing a stack
    if(!stack)
        return NULL ;

    char t[256];

    for(i =0,k=-1; i<strlen(temp_s); i++)                         // primary loop to run through various operations
    {

        for (j= 0; (!iswhitespace(temp_s[i])); j++)               // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i++];
        }

        t[j] = '\0';



        if(isOperand(t))                                          // condition for a operand
        {
            push_s(stack,t);

        }

        else if (isBinaryop(t))                                   // condition for binary operator
        {

            char temp_1[256],temp_2[256],temp[256];

            strcpy(temp_1,pop_s(stack));

            strcpy(temp_2,pop_s(stack));
            sprintf(temp,"%s %s %s",t,temp_2,temp_1);             // function for appropriate formatting of string

            push_s(stack,temp);

        }
        else if (isUnaryop(t))                                     // condition for unary operator
        {
            char temp1[256],temp[256];
            strcpy(temp1,pop_s(stack));
            sprintf(temp,"%s %s",t,temp1);                         // function for appropriate formatting of string
            push_s(stack,temp);
        }
    }



    strcpy(destination,pop_s(stack));                              // copy the required string from stack

    return destination;

}



char  *PrefixToPostfix(char *source, char *destination)          // convert prefix to postfix
{
    char sp[2] = {' ','\0'};                                     // whitespace string

    destination[0] = '\0';                                       // ensuring no garbage gets taken by string

    int i,k,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                             // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(source,temp_s);                         // removes excess whitespace from input string

    struct Stack_string* stack = createStack_s(strlen(source));     // initializing a stack
    if(!stack)
        return NULL ;

    char t[33];

    for(i=strlen(temp_s)-1,k =-1; i>=0; i--)                        // primary loop to run through various operations
    {


        for ( j= 0; ((!iswhitespace(temp_s[i])) && (i != -1)); j++) // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i--];
        }

        t[j] = '\0';

        strrev(t);

        if(isOperand(t))                                             // condition for a operand
        {
            push_s(stack,t);

        }

        else if (isBinaryop(t))                                      // condition for binary operator
        {

            char temp_1[256],temp_2[256],temp[256];

            strcpy(temp_1,pop_s(stack));

            strcpy(temp_2,pop_s(stack));
            sprintf(temp,"%s %s %s",temp_1,temp_2,t);                // function for appropriate formatting of string

            push_s(stack,temp);

        }
        else if (isUnaryop(t))                                        // condition for binary operator
        {
            char temp1[256],temp[256];
            strcpy(temp1,pop_s(stack));
            sprintf(temp,"%s %s",temp1,t);                            // function for appropriate formatting of string
            push_s(stack,temp);
        }
    }

    strcpy(destination,pop_s(stack));                                 // copy the required string from stack

    return destination;
}


char  *PostfixToInfix(char *source, char *destination)          // convert postfix to infix
{
    destination[0] = '\0';                                      // ensuring no garbage gets taken by string

    int i,k,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                          // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(source,temp_s);                      // removes excess whitespace from input string

    struct Stack_string* stack = createStack_s(strlen(source)); // initializing a stack
    if(!stack)
        return NULL ;

    char t[33];

    for(i =0,k=-1; i<strlen(temp_s); i++)                       // primary loop to run through various operations
    {

        for (j= 0; (!iswhitespace(temp_s[i])); j++)             // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i++];
        }

        t[j] = '\0';



        if(isOperand(t))                                        // condition for a operand
        {
            push_s(stack,t);

        }

        else if (isBinaryop(t))                                 // condition for a binary operator
        {

            char temp_1[256],temp_2[256],temp[256];
            temp[0] = '\0';
            strcpy(temp_1,pop_s(stack));
            strcpy(temp_2,pop_s(stack));
            sprintf(temp,"( %s %s %s )",temp_2,t,temp_1);
            push_s(stack,temp);

        }
        else if (isUnaryop(t))                                   // condition for a unary operator
        {
            char temp_1[256],temp[256];
            strcpy(temp_1,pop_s(stack));
            sprintf(temp,"( %s %s )",t,temp_1);
            push_s(stack,temp);
        }
    }


    strcpy(destination,pop_s(stack));                             // copy the required string from stack

    return destination;

}

char  *PrefixToInfix(char *source, char *destination)            // convert postfix to infix
{


    destination[0] = '\0';                                       // ensuring no garbage gets taken by string

    int i,k,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                             // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(source,temp_s);                         // removes excess whitespace from input string

    struct Stack_string* stack = createStack_s(strlen(source));   // initializing a stack
    if(!stack)
        return NULL ;

    char t[256];

    for(i=strlen(temp_s)-1,k =-1; i>=0; i--)                      // primary loop to run through various operations
    {


        for ( j= 0;((!iswhitespace(temp_s[i])) && (i != -1)); j++) // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i--];
        }

        t[j] = '\0';

        strrev(t);

        if(isOperand(t))                                           // condition for a operand
        {
            push_s(stack,t);

        }

        else if (isBinaryop(t))                                    // condition for binary operator
        {

            char temp_1[256],temp_2[256],temp[256];
            temp[0] = '\0';
            strcpy(temp_1,pop_s(stack));
            strcpy(temp_2,pop_s(stack));
            sprintf(temp,"( %s %s %s )",temp_1,t,temp_2);
            push_s(stack,temp);

        }
        else if (isUnaryop(t))                                     // condition for unary operator
        {
            char temp_1[256],temp[256];
            strcpy(temp_1,pop_s(stack));
            sprintf(temp,"( %s %s )",t,temp_1);
            push_s(stack,temp);
        }
    }


    strcpy(destination,pop_s(stack));                              // copy the required string from stack

    return destination;

}


double EvaluatePostFix(char *x)                                   // evaluate postfix expression
{
    int i,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                             // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(x,temp_s);                              // removes excess whitespace from input string


    struct Stack_double* stack = createStack_d(strlen(temp_s));   // initializing a stack
    if(!stack)
        return -1.000 ;

    char t[256];


    for(i=0; i<strlen(temp_s); i++)                                // primary loop to run through various operations
    {
        for (j= 0; (!iswhitespace(temp_s[i])); j++)                // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i++];
        }

        t[j] = '\0';



        if(isOperand(t))                                            // condition for a operand
        {
            double temp;
            temp = atof(t);
            push_d(stack,temp);
        }
        else if (isUnaryop(t))                                      // condition for unary operator
        {
            if(t[0] == '#')
            {
                double temp,popper;
                popper = pop_d(stack);
                temp = (0 - popper);

                push_d(stack,temp);
            }
            else if(t[0] == '@')
            {
                double temp,popper;
                popper = pop_d(stack);
                temp = (0 + popper);

                push_d(stack,temp);
            }
        }
        else if (isBinaryop(t))                                     // condition for binary operator
        {
            double temp_1,temp_2,temp;
            temp_1 = pop_d(stack);

            temp_2 = pop_d(stack);

            if(t[0] == '+')
            {
                temp = temp_2 + temp_1;


                push_d(stack,temp);

            }
            else if (t[0] == '-')
            {
                temp = temp_2 - temp_1;

                push_d(stack,temp);


            }
            else if (t[0] == '*')
            {

                temp = temp_2 * temp_1;

                push_d(stack,temp);

            }
            else if (t[0] == '/')
            {

                temp = temp_2 / temp_1;

                push_d(stack,temp);

            }
            else if (t[0] == '^')
            {

                temp = pow(temp_2,temp_1);

                push_d(stack,temp);

            }
        }

    }

    return pop_d(stack);
}

double EvaluatePreFix(char *x)                                       // evaluate postfix expression
{

    int i,j;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                              // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(x,temp_s);                               // removes excess whitespace from input string


    struct Stack_double* stack = createStack_d(strlen(temp_s));    // initializing a stack
    if(!stack)
        return -1.000 ;

    char t[32];

    for(i=(strlen(temp_s) - 1); i>=0; i--)                        // primary loop to run through various operations
    {
        for (j= 0; ((!iswhitespace(temp_s[i])) && (i != -1)); j++) // individually store parts of expression in a string so that operations can be performed on them
        {
            t[j] = temp_s[i--];
        }

        t[j] = '\0';

        strrev(t);

        if(isOperand(t))                                            // condition for a operand
        {
            double temp;
            temp = atof(t);

            push_d(stack,temp);
        }
        else if (isUnaryop(t))                                      // condition for unary operator
        {
            if(t[0] == '#')
            {
                double temp,popper;
                popper = pop_d(stack);
                temp = (0 - popper);

                push_d(stack,temp);
            }
            else if(t[0] == '@')
            {
                double temp,popper;
                popper = pop_d(stack);
                temp = (0 + popper);

                push_d(stack,temp);
            }
        }
        else if (isBinaryop(t))                                    // condition for binary operator
        {

            if(t[0] == '+')
            {
                double temp_1,temp_2,temp;
                temp_1 = pop_d(stack);

                temp_2 = pop_d(stack);

                temp = temp_1 + temp_2;

                push_d(stack,temp);
            }
            else if (t[0] == '-')
            {
                double temp_1,temp_2,temp;
                temp_1 = pop_d(stack);

                temp_2 = pop_d(stack);

                temp = temp_1 - temp_2;

                push_d(stack,temp);

            }
            else if (t[0] == '*')
            {
                double temp_1,temp_2,temp;
                temp_1 = pop_d(stack);
                temp_2 = pop_d(stack);
                temp = temp_1 * temp_2;

                push_d(stack,temp);
            }
            else if (t[0] == '/')
            {
                double temp_1,temp_2,temp;
                temp_1 = pop_d(stack);
                temp_2 = pop_d(stack);
                temp = temp_1 / temp_2;
                push_d(stack,temp);
            }
            else if (t[0] == '^')
            {
                double temp_1,temp_2,temp;
                temp_1 = pop_d(stack);
                temp_2 = pop_d(stack);
                temp = pow(temp_1,temp_2);
                push_d(stack,temp);
            }
        }

    }

    double retu = pop_d(stack);

    return retu;
}


double EvaluateUsingPostfix(char *x)                                 // Evaluate infix after converting it to postfix
{
    char temp_s[256], restrictr[256], destination[256];

    removeextrawhitesp(x,temp_s);

    InfixToPostfix(temp_s,destination);

    double temp = EvaluatePostFix(destination);
    return temp;
}

double EvaluateUsingPrefix(char *x)                                  // Evaluate infix after converting it to prefix
{

    char temp_s[256], restrictr[256], destination[256];

    removeextrawhitesp(x,temp_s);

    InfixToPrefix(temp_s,destination);
    double temp = EvaluatePreFix(destination);
    return temp;
}

char  *CheckUnary(char *x, char *y)                                 // converts to correct notation for infix expression
{
    int i = 0,j = 0,k=0;

    char temp_s[256], restrictr[256];

    temp_s[0] = '\0';                                              // ensuring no garbage gets taken by string
    restrictr[0] = '\0';

    removeextrawhitesp(x,temp_s);                               // removes excess whitespace from input string

    char t[256];

    if((temp_s[0] == '+') || (temp_s[0] == '-'))                   // 1st element is +/-
    {
        if(temp_s[i] == '+')
        {
            t[j++] = '@';

        }
        else
        {
            t[j++] = '#';
        }
        k++;
    }

    for(i=k; i<strlen(temp_s); i++)                                   // +/- occurs directly after '(' or an operator
    {
        if(((temp_s[i] == '+') || (temp_s[i] == '-')) && ((temp_s[i-2] == '(') || (temp_s[i-2] == '*') || (temp_s[i-2] == '+') || (temp_s[i-2] == '-') || (temp_s[i-2] == '/') || (temp_s[i-2] == '^')))
        {
            if(temp_s[i] == '+')
            {
                t[j++] = '@';

            }
            else
            {
                t[j++] = '#';
            }
        }

        else
        {
            t[j++] = temp_s[i];
        }
    }

    t[j] = '\0';

    strcpy(y,t);

    return y;
}

