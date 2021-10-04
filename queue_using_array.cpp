//Queue using array
#include<stdio.h>
#include<stdlib.h>
#define max 100
int queue_imp[max];
int back=-1;
int fro=-1;
void insertion_queue()
{
	if(back==max-1)
	{
		printf("\n Queue is full can't insert.\n");
	}
	else
	{
		int data;
		printf("Enter the element you want to insert:\n");
		scanf("%d",&data);
		fro=0;
		back++;
		queue_imp[back]=data;
	}
}
void delete_queue()
{
	if(fro==-1 || fro>back)
	{
		printf("\n Queue is empty can't delete.\n\n");
	}
	else
	{
		printf("Deleted item of queue is:%d\n\n",queue_imp[fro]);
		fro +=1;
	}
}
void display()
{
	if(fro==-1 || fro>back)
	{
		printf("\n Queue is empty\n");
	}
	else
	{
		int i;
		printf("Queue element is:\n");
		for(i=fro;i<=back;i++)
		{
			printf("%d\n",queue_imp[i]);
		}
	}
}
int main()
{
	int ch;
	do{
		printf("Press 1 for insertion.\n");
		printf("Press 2 for deletion.\n");
		printf("Press 3 for Display.\n");
		printf("Press 4 for end program.\n\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertion_queue();
			break;
			case 2:
				delete_queue();
			break;
			case 3:
				display();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Press a valid choice 1 or 2 or 3 or 4.");
		}
	}while(1);
	
}
