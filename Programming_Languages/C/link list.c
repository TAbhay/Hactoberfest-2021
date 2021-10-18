//Program to create a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
}*head,*p;

int main()
{
	char ch='y';
	head=(struct  node *)malloc(1*sizeof(struct node));//Dynamic allocation using malloc
	p=head; 
	while(ch=='y')
	{
		printf("Enter data for link list:-");
		scanf(" %d",&p->d);//Data insertion
		printf("Do you want to add another data?\n");
		scanf(" %c",&ch); //space before %c to avoid all whitespaces before scanf
		if(ch=='y')
		{
			p->next=(struct node *)malloc(sizeof(struct node));//Linked list creation
		}
		else
		{
			p->next=NULL;
		}
		p=p->next;
	}
	p=head;
	while(p!=NULL)//Printing data till the last node
	{
		printf("%d, ",p->d);
		p=p->next;
	}
	return 0;
}
