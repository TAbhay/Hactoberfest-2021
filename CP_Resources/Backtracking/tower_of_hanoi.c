#include<stdio.h>
void toh(int,char,char,char);
 int main() 
 {
    int d=0;
    printf("enter the number of discs:");
    scanf("%d",&d);
    toh(d,'a','b','c');
    return 0;
}
void toh(int n,char A,char B,char C)
{
    if(n>0)
    {
    toh(n-1,A,C,B);
    printf("%c to %c\n",A,C);
    toh(n-1,B,A,C);
    }
}