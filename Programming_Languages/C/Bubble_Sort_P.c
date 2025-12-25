/*
write a program to sort a given array using bubble sort method.
*/

#include<stdio.h>
#include<conio.h>

void Bubble_sort(int arr[],int n)
{
	int i,j,temp;
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	printf("Bubble_sort:");
	for (i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}

int main()
{
	int n=5,i;
	int arr[n]; 

	printf("Enter Element:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Bubble_sort(arr,n);	
}
