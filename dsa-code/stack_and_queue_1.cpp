#include <iostream>
using namespace std;

//stack using array
class stackUsingArray
{
    int* data;
    //pointer le liye hain so that dynamically array ka size allocate kr den
    int nextIndex;
    //to traverse through array nextIndex le liye hain int type ka
    int capacity;
    //ise isliye initialize kiye hain taki stack ka size pata rhe
    //basically ye help krta hai ye dekhne me ki hmara stack overflow to nhi kr rha

public:
    //constructor
    stackUsingArray(int totalSize){
        //data name se array bana liye hain
        data=new int[totalSize];
        //starting me nextIndex ki value zero rakhenge
        nextIndex=0;
        capacity=totalSize;
        //hmare stack ka utna hi capacity rahega jitna user ne paas kiya hai totalSize
    }
    //size funtion for returning size of stack
    int sizeOfStack(){
        return nextIndex;
        //nextindex ki value jahan tk rahegi whi stack ki size rahegi
        //kuki hm jb bhi koi element insert krte jate hain to nextindex ki size
        //increase krte jate hain
    }

    int isEmpty(){
        if(nextIndex==0)
            return true;
        else
            return false;
    }

    //inserting an element
    void push(int element){
        if(nextIndex==capacity){
            cout<<"stack is full ";
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //deleting an element
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    //to see top element
    int top()
    {
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main()
{
    cout<<"Program started.."<<endl;
    //stack-it is a abstract data type means hm isme specific order me hi data
    //insert aur delete kr skte hain
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.sizeOfStack()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}

