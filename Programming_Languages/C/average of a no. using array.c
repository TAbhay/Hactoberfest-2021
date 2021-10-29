#include<conio.h>
#include<stdio.h>
#include<math.h>


int main()
{
    int a,i;
    double s[100];
    double sum=0,avg;
    printf("enter no of digit\n ");
    scanf("%d",&a);
    while(a<2 && a>=100)
    {
         return;
    }
        printf("enter no. is out of limit (i.e.2<a<100)");
        printf("enter no. again");
        scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        printf("enter no.to find average");
        scanf("%lf",&s[i]);
        sum=sum+s[i];
    }
    avg=sum/a;
    printf("the average of given no. are %lf",avg);

}

