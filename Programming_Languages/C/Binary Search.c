#include<stdio.h>
int main()
{
	int key,mid,i,j,t;
	int lb=0;
	int ub=10;
	int arr[10]={45,28,10,1,65,56,7,20,41,98};
	printf("My initial array:-\n");
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	//Sorting array using bubble sort
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\nAfter sorting the array:-\n");
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	//Binary search
	printf("\nPlease enter the element to search:-");
	scanf("%d",&key);
	mid=(lb+ub)/2;
	while(arr[mid]!=key && lb<=ub)
	{
		if(arr[mid]<key)
		lb=mid+1;
		else
		ub=mid-1;
		mid=(lb+ub)/2;
	}
	if(arr[mid]==key)
	printf("your element is found at index %d",mid+1);
	else
	printf("Element not found in the array");
	return 0;
}
