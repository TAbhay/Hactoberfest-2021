#ifndef MINOR
#define MINOR



double EvaluateUsingPostfix(char *x); //x is an infix string
double EvaluateUsingPrefix(char *x); //x is an infix string
double EvaluatePostFix(char *x); //x is an postfix string
double EvaluatePreFix(char *x); //x is an prefix string

char  *InfixToPostfix(char *source, char *destination); //DONE - 1
char  *InfixToPrefix(char *source, char *destination); //DONE - 2
char  *PostfixToPrefix(char *source, char *destination);//DONE - 3
char  *PrefixToPostfix(char *source, char *destination); //DONE - 4
char  *PostfixToInfix(char *source, char *destination); //DONE - 5
char  *PrefixToInfix(char *source, char *destination);  //DONE - 6

char  *CheckUnary(char *x, char *y); //converts the standard infix notation to converted unary representation

#endif
