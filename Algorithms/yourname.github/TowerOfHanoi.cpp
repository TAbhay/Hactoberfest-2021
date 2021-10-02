#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char a, char b, char c){

    if(n==1)
    {
        cout<<"Move disk 1 from peg "<<a<<" to peg "<<b<<endl;
        return;
    }

    TowerOfHanoi(n-1,'A','C','B');

    cout<<"Move disk "<<n<<" from "<<a<<" to rod "<<b<<endl;
    TowerOfHanoi(n-1,'C','B','A');
}

int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
}