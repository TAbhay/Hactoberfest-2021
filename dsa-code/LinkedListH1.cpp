#include <bits/stdc++.h>
#include "header/linkedList.h"
using namespace std;

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

Node* takeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
    }
    return head;
}

Node* takeInputOptimised(){
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

        }
        cin>>data;
    }
    return head;
}

void insertNode(Node* head,int i,int data){
    Node* newNode = new Node(data);
    int counter=0;
    Node* temp = head;
    while(counter<i-1){
        temp=temp->next;
        couter++;
    }
    Node* a =temp->next;
    temp->next = newNode;
    newNode->next = a;
}

void deleteNode(Node* head,int i){
    int counter=0;
    Node* temp = head;
    while(counter<i-1){
        temp=temp->next;
        counter++;
    }
    Node* a = temp->next;
    Node* b = a->next;
    temp->next = b;
    delete a;
}

int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    Node n1(1);
    Node n2(2);
    Node n3(3);

    n1.next = &n2;
    n2.next = &n3;

    Node* head = &n1;
    printLinkedList(head);

    //Node* head1=takeInput();
    Node* head2 = takeInputOptimised();
    printLinkedList(head2);


    return 0;
}

