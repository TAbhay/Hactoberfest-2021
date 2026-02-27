#include<bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){
    ll n,p,t;
    cin>>n>>p>>t;
    if (p==t) cout<<1<<endl;
    else{
        cout<<n - min(p,t)+1<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}