#include <iostream>

using namespace std;

int main()
{
int x;
cout<<"Enter any number!"<<endl;
cin>>x;
int y=0;
int z=1;
int v = 0;
while(v<x)
{
    cout<<y+z<<endl;
    int g = y;
    y=z+y;
    z=y;
    v++;
}

    return 0;
}
