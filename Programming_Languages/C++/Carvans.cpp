#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){        
        ll n;
        cin>>n;
        ll cnt = 1;
        vector<ll> cars(n);
        for(ll i=0;i<n;i++){
            cin>>cars[i];
        }
        for(ll i=1;i<n;i++){
            if (cars[i]<=cars[i-1]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}