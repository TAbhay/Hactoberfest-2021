#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a = (k*l)/nl;
    int b = c*d;
    int s = p/np;
    cout<<(min(min(a,b),s))/n;
    return 0;
}
