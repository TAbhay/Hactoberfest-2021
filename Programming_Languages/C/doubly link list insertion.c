//A program to insert new nodes in Doubly Linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int d;
	struct node *left,*right;
}node;

void create(node *h)
{
	node *q,*c;
	char ch='y';
	c=h;
	q=NULL;
	while(ch=='y')
	{
		printf("Enter the element:-");
		scanf(" %d",&c->d);
		c->left=q;
		printf("Do you want to add another element?(y/n):-");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			c->right=(node *)malloc(sizeof(node));
			q=c;
		}
		else
		{
			c->right=NULL;
			break;
		}
		c=c->right;
	}
	c=h;
	printf("Link list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
	
}

void insert_beg(node **h)// Insert at the begining of the node
{
	node *new,*c;
	new=(node *)malloc(sizeof(node));
	new->left=NULL;
	printf("\nEnter new elment in the begining:-");
	scanf(" %d",&new->d);
	new->right=*h;
	*h=new;
	c=*h; 
	printf("Link list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

void insert_end(node *h)//Insert at the end of the node
{
	node *new,*c;
	c=h;
	while(c->right!=NULL)
	{
		c=c->right;
	}
	new=(node *)malloc(sizeof(node));
	c->right=new;
	new->left=c;
	new->right=NULL;
	printf("\nEnter new elment in the end:-");
	scanf(" %d",&new->d);
	c=h;
	printf("Link list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

void insert_anyposition(node *h)//Function to insert at any place in the node
{
	node *new,*c;
	c=h;
	int key;
	printf("\nLink list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
	printf("\nYou want to insert element after:-");
	scanf(" %d",&key);
	c=h;
	while(c->d!=key && c->right!=NULL)
	{
		c=c->right;
	}
	new=(node *)malloc(sizeof(node));
	if(c->right==NULL && c->d !=key)
	{
		printf("\nNo such element found!\n");
	}
	else
	{
		c->right->left=new;
		new->left=c;
		new->right=c->right;
		c->right=new;
		printf("Enter new elment that you want to insert:-");
		scanf(" %d",&new->d);
	}
	c=h;
	printf("Linked list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

int main()//Main function
{
	node *head,*p;
	head=(node *)malloc(sizeof(node));
	p=head;
	create(p);
	insert_beg(&p);
	insert_end(p);
	insert_anyposition(p);
	return 0;
}
