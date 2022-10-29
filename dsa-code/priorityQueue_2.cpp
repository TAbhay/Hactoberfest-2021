#include <iostream>
#include <queue>
/*inbuilt priority queue bhi queue me hi rehta hai
bs class me hm priority_queue<datatype> is trah initiate krenge
by default max priority queue bnta hai means
functions:
empty()
size()
push(element)
T top()
pop() - lekin isse element return nhi hoga
*/

using namespace std;

int main()
{
    priority_queue<int> pq; //normal max heap
    pq.push(167);
    pq.push(78);
    pq.push(87);
    pq.push(56);
    pq.push(45);
    pq.push(20);

    cout<<"size: "<<pq.size()<<endl;
    cout<<"Top: "<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    //to make a min heap
    priority_queue<int,vector<int>,greater<int> > pqmin;
    pqmin.push(167);
    pqmin.push(78);
    pqmin.push(87);
    pqmin.push(56);
    pqmin.push(45);
    pqmin.push(20);

    cout<<"size: "<<pqmin.size()<<endl;
    cout<<"Top: "<<pqmin.top()<<endl;

    while(!pqmin.empty()){
        cout<<pqmin.top()<<endl;
        pqmin.pop();
    }
    return 0;
}
