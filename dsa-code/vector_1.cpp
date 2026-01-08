#include <iostream>
using namespace std;
#include <vector>


int main()
{
    cout<<"-------------Program started-------------"<<endl;
    vector<int> v; //to initialise a vector
    //if we have to initialise a char vector then vector<char> v;

    //to insert an element in a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //to print the size of vector
    cout<<"size of vecotr: "<<v.size()<<endl;

    v.pop_back();
    //pop_back don't return element 50 is popped out

    //to print the all values of vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

