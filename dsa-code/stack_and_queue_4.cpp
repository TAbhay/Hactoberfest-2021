#include <iostream>
using namespace std;

//implement queue using array
class queueUsingArray
{
    int* data;
    int nextIndex;
    int firstIndex;
    int Size;
    int capacity;

public:
    queueUsingArray(int s)
    {
        data = new int[s];
        nextIndex=0;
        firstIndex=-1;
        Size=0;
        capacity=s;
    }

    int getSize(){
        return Size;
    }

    bool isEmpty(){
        return Size==0?true:false;
    }

    void enqueue(int element){
        if(Size==capacity)
            cout<<"Queue Full"<<endl;
        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity; //isse queue circular behave krta hai
        if(firstIndex==-1)
            firstIndex=0;
        Size++;
    }

    int front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
    }

    int deque()
    {
         if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int ans= data[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        Size--;
        if(Size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
};

int main()
{
    cout<<"Program started.."<<endl;
    queueUsingArray q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"First element is: "<<q.front()<<endl;
    cout<<"after dequeue element removed: "<<q.deque()<<endl;
    cout<<"size of Queue is: "<<q.getSize()<<endl;
    cout<<"Now first element is: "<<q.front()<<endl;


    return 0;
}

