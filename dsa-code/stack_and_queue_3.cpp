#include <iostream>
//inbuilt stack
#include <stack>
using namespace std;



int main()
{
    cout<<"Program started.."<<endl;
    stack<int> s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

   cout<<s.top()<<endl;
   s.pop();//inbuilt stack me pop funtion top element ko delete kr deta hai
   //kuchh return nhi krta

   cout<<s.top()<<endl;

   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
   return 0;
}

