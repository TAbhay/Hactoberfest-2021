// Credit : (Toyeesh Sinha)

#include<stdio.h>
#include<stdlib.h>

#include "Operations.h"

int main() // modify this file to call functions as and when necessary :)
{
    char source_s[256]="[1 + - - - - - -  + ( 8  - 6 ) * 2 / ( 3 -1)+(2^-6)] / 2";
    char out_s[256],destination[256];
    //destination[0] = '\0';
    printf("%s",CheckUnary(source_s,out_s));
    //printf("\n%s\n",InfixToPrefix(out_s,destination));
    //printf("\n%s\n",InfixToPostfix(out_s,destination));
    //printf("\n%lf\n",EvaluateUsingPrefix(source_s));
    //printf("\n%lf\n",EvaluateUsingPostfix(source_s));
    return 0;
}
