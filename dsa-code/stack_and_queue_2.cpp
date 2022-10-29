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

//stack using linked list
class Stack
{
    Node* head;
    int Size;   //for calculating size of stack

public:
    //constructor
    Stack()
    {
        head=NULL;
        Size=0;
    }

    //getSize function
    int getSize()
    {
        return Size;
    }

    bool isEmpty()
    {
        if(head==NULL)
            return true;
        else
            return false;
    }

    void push(int element)
    {
        Node* newNode = new Node(element);
        newNode->next = head;
        head=newNode;
        Size++;
    }

    int pop()
    {
        if(isEmpty())
            return 0;
        int ans = head->data;
        Node* temp = head;
        head=head->next;
        delete temp;
        Size--;
        return ans;
    }

    int top()
    {
        if(isEmpty())
            return 0;
        return head->data;
    }

};

int main()
{
    cout<<"Program started.."<<endl;
    Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    cout<<"top of stack is: "<<s.top()<<endl;
    cout<<"is stack empty: "<<s.isEmpty()<<endl;
    cout<<"element popped: "<<s.pop()<<endl;
    cout<<"size of stack is: "<<s.getSize()<<endl;
    cout<<"top of stack is: "<<s.top()<<endl;


    return 0;
}

