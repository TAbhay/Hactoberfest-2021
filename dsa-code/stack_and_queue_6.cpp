#include <iostream>
//inbuilt queue
#include <queue>
using namespace std;



int main()
{
    cout<<"Program started.."<<endl;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);


    cout<<"First element is: "<<q.front()<<endl;
    q.pop();
    cout<<"size of Queue is: "<<q.size()<<endl;
    cout<<"Now first element is: "<<q.front()<<endl;
    cout<<"is ll empty: "<<q.empty()<<endl;

    return 0;
}



