#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n,x;
    cin>>n>>x;
    ll minutes = 0;
    ll start = 1;
    for(ll i=0;i<n;i++){
        ll l,r;
        cin>>l>>r;
        minutes += (l-start)%x;
        minutes += r-l+1;
        start = r+1; 
    }

    cout<<minutes;
    return 0;

}