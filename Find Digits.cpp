#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long n;
    while(t--)
    {
        long c,d=0,k;
        cin>>n;
        k=n;
        while(k!=0)
        {
            c = k%10;
            k /= 10;
            if(c!=0 && n%c==0)
            {
                d++;
            }
        }
        cout<<d<<endl;
    }
}
