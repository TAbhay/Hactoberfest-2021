# include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    string name,fullname;
    cout<<"Hello World ";
    cout<<"Enter two numbers ";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c<<" ";
    cout<<"Enter your name ";
    cin>>name;//this only takes one word. fro multiple words use get line
    cout<<"Your Name is "<<name;
    cout<<"Enter your full name ";
    getline(cin,fullname);
    cout<<"Your full name is "<<fullname;
    return 0;
}