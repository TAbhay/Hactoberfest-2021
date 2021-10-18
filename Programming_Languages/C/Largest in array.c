#include<stdio.h>
void largest(int *);	//Function to accept the array by address
int main()
{
	int i;
	int arr[10]={22,67,54,23,76,89,45,65,98,56};
	printf("Array to be sorted:- ");
	for(i=0;i<10;i++)
	printf("%d, ",arr[i]);
	largest(&arr[0]);
	return 0;
}
void largest(int *p)
{
	int large=0;
	int i;
	for(i=0;i<10;i++)
	{
		if(large<*(p+i))
		large=*(p+i);
	}
	printf("\nThe largest element of the array is:- %d",large);
}
