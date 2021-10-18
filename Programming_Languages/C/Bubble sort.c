#include<stdio.h>
int main()
{
	int i,j,t;
	int arr[10]={43,1,65,22,44,6,76,98,23,11};
	printf("The array before sorting:-\n");
	for(i=0;i<10;i++)
	printf("%d, ",arr[i]);
	//Bubble sort starts
	for(i=0;i<10;i++)
	for(j=0;j<9-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
	}
	printf("\nThe array after applying bubble sort:-\n");
	for(i=0;i<10;i++)
	printf("%d, ",arr[i]);
	return 0;
}
