//A function that will return the length of a character string using pointer. You arenot allowed to use the strlen C library function.
#include<stdio.h>
#include<string.h>
int main()
{
int x=0;
char sent[100],*p;
printf("\n enter the string");
scanf("%s",sent);
p=sent; //&sent=[0]

while(*p!=0)
{
x++;

p++;
}
printf("\n length=%d",x);
return 0;
}
