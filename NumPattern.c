//help me for hactoberfest

#include<stdio.h>
/* follow the pattern
1
12
123
1234
12345
123456
1234567*/

void num(int n)
{
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                printf("%d",j);
                printf("\n");
        }
}
int main()
{
    int no;
    printf("How many number lines you want to print ? \n");
    scanf("%d",&no);
    num(no);
    return 0;
}
