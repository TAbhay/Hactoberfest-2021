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

void print(Node* head)
{
    //direct head node ko use nhi krenge pehle ek temp node bna lenge
        //so that operation ke baad bhi head ka value change nhi ho
        Node* temp = head;
        while(temp!=NULL){

        //pehle data print krenge
        cout<<temp->data<<endl;
        //ab temp ka value aage kr denge means temp me temp ka next value dal denge
        temp=temp->next;
        //aisa tb tk krenge jab tk temp null na ho jaye
    }
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

    //to print our linkes list we will create a function and pass head node as a
    //parameter because agar hme linked list ka head node mil gaya meand sb kuchh
    //mil gya linked list ka
    print(head);

    return 0;
}

