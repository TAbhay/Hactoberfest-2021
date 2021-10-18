#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};

void create(struct node *c)//Function to create Nodes
{
	char ch='y';
	while(ch=='y')
	{
		printf("Please enter data for linked list:-");
		scanf(" %d",&c->d);
		printf("Do you want to add another data(y/n)?\n");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			c->next=(struct node *)malloc(sizeof(struct node));//creating new node
		}
		else
		{
			c->next=NULL;
		}
		c=c->next;
	}
}

void insert_beg(struct node **c) //Using double pointer to overwrite the head using pointer when new element is added in begining
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->next=*c;
	*c=n;
	printf("Please enter data to insert at begining:-");
	scanf(" %d",&n->d);
	printf("Link list at insertion in begining:-\n");
	while(n!=NULL)
	{
		printf("%d ",n->d);
		n = n->next;
	}
}

void insert_end(struct node *c)
{
	struct node *n,*head;
	head=c; //to store value of head and reuse when needed
	n=(struct node *)malloc(sizeof(struct node));
	while(c->next!=NULL)
	{
		c=c->next;
	}
	n->next=c->next;
	c->next=n;
	printf("\nPlease enter data to insert at the end:-");
	scanf(" %d",&n->d);
	c=head; //reset c to head
	printf("Link list at insertion at the end:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
}

void insert_any(struct node *c)
{
	struct node *n,*head;
	head=c;
	int key;
	printf("\nThe elements are:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
	n=(struct node *)malloc(sizeof(struct node));
	printf("\nAfter which element do you want to insert data:-");
	scanf("%d",&key);
	c=head; //reset c to head
	while(c->d!=key && c->next!=NULL)
	{
		c=c->next;
	}
	if(c->next==NULL && c->d!=key)
	printf("The given element not found in link list!");
	else
	{
		n->next=c->next;
		c->next=n;
		printf("Please enter data to be inserted:-");
		scanf("%d",&n->d);
	c=head; //reset c to head
	printf("Link list after insertion:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
	}
}

int main()
{
	struct node *head,*p;
	head=(struct node *)malloc(sizeof(struct node));
	p=head;
	create(p);
	insert_beg(&p);
	insert_end(p);
	insert_any(p);
	return 0;
}
