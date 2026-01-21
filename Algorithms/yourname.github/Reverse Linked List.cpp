#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
	node* takeinput(){
		int data=0;
		node*head=NULL;
		node*tail=NULL;
		cout<<"enter the data of your linked list, enter -1 to stop:"<<endl;
		cin>>data;
		while(data!=-1){
			node*n=new node(data);
			if(head==NULL){
				head=n;
				tail=n;
			}
			else{
				tail->next=n;
				tail=n;
			}
			cin>>data;
		}
		return head;
	}
	void print(node*head)
	{
		while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
	return;
	}
	node*reversell(node*head){
		node*head1=head;
		node*tail=head->next;
		head->next=NULL;
		head=tail;
		while(head->next!=NULL){
			tail=head->next;
			head->next=head1;
			head1=head;
			head=tail;
		}
		head->next=head1;
		return head;
	}
int main()
{
	node*n=takeinput();
	node*n1=reversell(n);
	print(n1);
	return 0;
}
