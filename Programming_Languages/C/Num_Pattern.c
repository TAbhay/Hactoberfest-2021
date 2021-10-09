// Floyd's Triangle
// 1
// 23
// 456
// 78910
// 1112131415

#include <stdio.h>

int main()
{
    int i, j, num=1;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}