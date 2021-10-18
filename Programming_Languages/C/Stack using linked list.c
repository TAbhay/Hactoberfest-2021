#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};
struct node *top=NULL; //global variable 

void push(int); //prototypes
void pop();
void display();

int main()
{
	int ch,data;
	while(1)
	{
		printf("Enter 1 for Push\nEnter 2 for Pop\nEnter 3 for Display\nEnter 4 to Exit\nOption:-");
		scanf(" %d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter data to be pushed:-");
				scanf(" %d",&data);
				push(data);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Program Terminated!");
				return 0;
			}
			default:
				printf("\nInvalid input! Type Again!\n");
		}
		printf("\n");
	}
}

void push(int i)
{
	struct node *n=(struct node *)malloc(sizeof(struct node));
	n->d=i;
	printf("%d pushed\n",n->d);
	n->next=top;
	top=n;
}

void pop()
{
	struct node *n;
	if (top==NULL)
		printf("Nothing to pop, Stack Empty!\n");
	else
	{
		n=top;
		top=n->next;
		printf("%d poped\n",n->d);
		free(n);
	}
}

void display()
{
	if(top==NULL)
		printf("\nStack Empty!!!");
	struct node *n;
	n=top;
	while(n!=NULL)
	{
		printf("%d\t",n->d);
		n=n->next;
	}
	printf("\n");
}
