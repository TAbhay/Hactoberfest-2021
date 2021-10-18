//Program to apply stacks using array
#include<stdio.h>
int top=-1; //global variables
int c=15;
int stack[15];

void push(int);
void pop();
void display();
int main()
{
	int ch,data;
	while(1) //any value except 0 is true in c
	{
		printf("Enter 1 for Push\nEnter 2 for Pop\nEnter 3 for Display\nEnter 4 to Exit\nOption:-");
		scanf(" %d",&ch);
		switch(ch)//Using switch case to visualise the push and pop
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
	if(top==c-1)//c-1 instead of 14 for ease to edit from the global vars
	printf("No more space to push, Stack Full!\n");
	else
	{
		top=top+1;
		stack[top]=i;
		printf("%d pushed\n",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	printf("Nothing to pop, Stack Empty!\n");
	else
	{
		printf("%d poped\n",stack[top]);
		top=top-1;
	}
}

void display()
{
	if(top==-1)
	printf("\nStack Empty!!!\n");
	else
	{
		int i;
		for(i=top;i>-1;i--)
		printf("%d\t",stack[i]);
		printf("\n");
	}
}
