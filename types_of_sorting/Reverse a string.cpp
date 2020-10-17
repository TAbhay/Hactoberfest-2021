#include<iostream>
#include<stack>
using namespace std;
void Reverse(char *c,int n){
    stack<char> s;
    for(int i=0;i<n;i++){
        s.push(c[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=s.top();
        s.pop();
    }
}
int main()
{char c[51];
    cout<<"Enter the string "<<endl;
    gets(c);
    Reverse(c,strlen(c));
    cout<<c<<endl;
}
