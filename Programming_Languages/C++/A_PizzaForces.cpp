#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //cout<<"n="<<n<<" -> ";
        if(n<=6) cout<<"15"<<endl;
        else cout<<(n+1)/2*5<<endl;
    }
}