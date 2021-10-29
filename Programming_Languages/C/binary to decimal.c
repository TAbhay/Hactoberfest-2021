
#include<conio.h>
#include<stdio.h>
#include<math.h>
int bd(int n);
int main()
{
    int A;
    printf("enter any no. to convert ");
    scanf("%d",&A);
    printf("the decimal of given no is %d",bd(A));
    getch();
}
int bd(int n)
{
    int a,b=0,i=0;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        b=b+a*pow(2,i);
        i++;
    }
    return(b);
}
