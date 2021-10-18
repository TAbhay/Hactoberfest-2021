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

void delete_beg(node **h)
{
	node *c,*c1;
	c1=*h;
	c=c1->right;
	c->left=NULL;
	*h=c;
	free(c1);//To delete element
	printf("\nLink list after deleting begining:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

void delete_end(node *h)
{
	node *c,*c1;
	c1=h;
	while(c1->right!=NULL)
	{
		c=c1;
		c1=c1->right;
	}
	c->right=NULL;
	free(c1);
	c=h;
	printf("\nLink list after deleting end:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

void delete_anyposition(node *h)
{
	node *c,*c1;
	c1=h;
	int key;
	printf("\nLink list:-\n");
	while(c1!=NULL)
	{
		printf("%d, ",c1->d);
		c1=c1->right;
	}
	printf("\nAfter which element you want to delete:-");
	scanf(" %d",&key);
	c1=h;
	if(c1->d==key)
	{
		delete_beg(&c1);
		return;
	}
	while(c1!=NULL)
	{
		if(c1->d!=key)
		{
			c=c1;
			c1=c1->right;	
		}
		else
		{
			c->right=c1->right;
			if(c1->right==NULL)
			break;
			else
			c1->right->left=c;
			free(c1);
			break;
		}
		
	}
	if(c1==NULL)
	printf("\nNo such element found in the list!\n");
	c=h;
	printf("Link list:-\n");
	while(c!=NULL)
	{
		printf("%d, ",c->d);
		c=c->right;
	}
}

int main()
{
	node *head,*p;
	head=(node *)malloc(sizeof(node));
	p=head;
	create(p);
	delete_beg(&p);
	delete_end(p);
	delete_anyposition(p);
	return 0;
}
