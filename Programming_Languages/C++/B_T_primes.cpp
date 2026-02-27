#include<bits/stdc++.h>

using namespace std;

#define ll long long int

bool isprime(ll n){
    for(ll i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}

set<ll> tprimes;

int main(){
    tprimes.insert(4);
    for(ll i=3;i<1000000;i+=2){
        if (isprime(i)) tprimes.insert(i*i);
    }   
    ll t;
    cin>>t;
    while(t--){
        //set<ll> tprimes;
        ll n;
        cin>>n;
        cout<< (tprimes.find(n)==tprimes.end()?"NO":"YES");
        cout<<endl;
    }
}