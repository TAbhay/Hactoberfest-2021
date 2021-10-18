#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};

void create(struct node *c) // Creates node
{
	struct node *head;
	head=c;
	char ch='y';
	while(ch=='y')
	{
		printf("Enter data for link list:-");
		scanf(" %d",&c->d);
		printf("Do you want to add another data(y/n)?\n");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			c->next=(struct node *)malloc(sizeof(struct node));//creating node
		}
		else
		{
			c->next=NULL;
		}
		c=c->next;
	}
	c=head;
	printf("\nThe elements in the nodes are:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
}

void delete_head(struct node **c)//Function to delete  the head of the node
{
	struct node *p1,*head;
	head=*c;
	p1=head->next;
	head=p1;
	free(*c);
	*c=head;
	printf("\nLinked list after deleting the head:-\n");
	while(p1!=NULL)
	{
		printf("%d ",p1->d);
		p1=p1->next;
	}
}

void delete_end(struct node *c)//Function to delete the end of the node
{
	struct node *p1,*head;
	head=c;
	while(c->next!=NULL)
	{
		p1=c;
		c=p1->next;
	}
	p1->next=NULL;
	free(c);
	c=head;
	printf("\nLinked list after deleting the end:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
}

void delete_any(struct node *c)//Function to delete node from anywhere in the list
{
	struct node *p1,*head;
	head=c;
	int key;
	printf("\nThe elements are:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
	printf("\nWhich element do you want to delete:-");
	scanf("%d",&key);
	c=head;
	if(c->d==key)
	{
		delete_head(&c);
		return;
	}
	while(c!=NULL)
	{
		if(c->d!=key)
		{
			p1=c;
			c=c->next;
		}
		else
		{
			p1->next=c->next;
			free(c);
			break;
		}
	}
	if(c==NULL)
	{
		printf("No such element found!");
		return;
	}
	c=head;
	printf("Link list after deleting the element:-\n");
	while(c!=NULL)
	{
		printf("%d ",c->d);
		c=c->next;
	}
}

int main()// Main function
{
	struct node *head,*p;
	head=(struct node *)malloc(sizeof(struct node));
	p=head;
	create(p);
	delete_head(&p);
	delete_end(p);
	delete_any(p);
	return 0;
}
