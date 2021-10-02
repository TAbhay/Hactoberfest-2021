#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;
        ll strt = (n+1)%k;
        if (x%k == 0){
            cout<<"YES"<<endl;
        } else if (strt != 0 && (x-strt)%k==0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;

}