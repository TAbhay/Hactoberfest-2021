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


//implement queue using linked list
class queueUsingLL
{
    Node* head;
    Node* tail;
    int Size;

public:
    queueUsingLL()
    {
        head=NULL;
        tail=NULL;
        Size=0;
    }

    int getSize(){
        return Size;
    }

    bool isEmpty(){
        return Size==0?true:false;
    }

    void enqueue(int element){
        Node* newNode = new Node(element);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next = newNode;
            tail=newNode;
        }

        Size++;
    }

    int front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return head->data;
    }

    int deque()
    {
         if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int ans= head->data;
        Node* temp = head;
        head=head->next;
        delete temp;
        Size--;
        return ans;
    }
};

int main()
{
    cout<<"Program started.."<<endl;
    queueUsingLL q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(200);

    cout<<"First element is: "<<q.front()<<endl;
    cout<<"after dequeue element removed: "<<q.deque()<<endl;
    cout<<"size of Queue is: "<<q.getSize()<<endl;
    cout<<"Now first element is: "<<q.front()<<endl;
    cout<<"Is LL empty: "<<q.isEmpty()<<endl;


    return 0;
}


