/*Hi there , myself tausiq. This is a program for bubble sort.
I hope you will like my code.*/
#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp;
    printf("Enter a no. of array Elements");
    scanf("%d",&n);
    printf("\n Enter data to the array-");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("\n Display the array data-");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Display the sorted array data-");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);

}