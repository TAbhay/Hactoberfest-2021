#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int d;
	struct node *left,*right;//We create two pointers for Head and Tail part of the Node
}node;

int main()
{
	node *head,*p,*q;
	char ch='y';
	q=NULL;
	head=(node *)malloc(sizeof(node));
	p=head;
	while(ch=='y')//Repeat the loop to create the required nodes
	{
		printf("Please enter the element:-");
		scanf(" %d",&p->d);
		p->left=q;
		printf("Do you want to add another element?(y/n):-");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			p->right=(node *)malloc(sizeof(node));
			q=p;
		}
		else
		{
			p->right=NULL;
			break;
		}
		p=p->right;
	}
	p=head;
	printf("Your Doubly Linked list is:-\n");
	while(p!=NULL)
	{
		printf("%d, ",p->d);
		p=p->right;
	}
	return 0;
}
