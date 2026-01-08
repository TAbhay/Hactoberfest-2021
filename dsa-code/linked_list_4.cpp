#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }

};

//-----------------taking input of linked list-------------------//
Node* takeInput1()
{
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head==NULL){
             head=newNode;
             tail=newNode;
        }
       else{
        tail->next=newNode;
        tail=tail->next;
        //OR
        //tail=newNode;
       }
        cin>>data;
    }
    return head;
}

void print(Node* head)
{
        //direct head node ko use nhi krenge pehle ek temp node bna lenge
        //so that operation ke baad bhi head ka value change nhi ho
        Node* temp = head;
        while(temp!=NULL){

        //pehle data print krenge
        cout<<temp->data<<" ";
        //ab temp ka value aage kr denge means temp me temp ka next value dal denge
        temp=temp->next;
        //aisa tb tk krenge jab tk temp null na ho jaye
    }
    cout<<endl;
}

//-------------finding mid of the linked list-----------------//
void midNode(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}

//---------------merging two sorted linked list-----------------//
Node* mergeLinkedList(Node* list1, Node* list2){

}


int main()
{
    //traversing the nodes
    Node n1(1);
    Node* head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    //now sb nodes ko connect kr denge
    n1.next=&n2;
    //n1 ke next me n2 ka address rakh liye isi trah baki sab ka bhi
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    //n5 ke address me automatically null hai
    //now our linked list is connected

    //to print our linked list we will create a function and pass head node as a
    //parameter because agar hme linked list ka head node mil gaya meand sb kuchh
    //mil gya linked list ka
    print(head);

    //finding mid of the linked list
    cout<<"mid of the linked list is: ";
    midNode(head);

    //merging two linked lists
    Node* list1=takeInput1();
    Node* list2=takeInput1();
    print(list1);
    print(list2);


    return 0;
}

