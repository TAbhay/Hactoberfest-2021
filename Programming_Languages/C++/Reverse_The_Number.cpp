#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0;
        while(n>0){
            ll dig = n%10;
            n = n/10;
            ans = ans*10 + dig;
        }

        cout<<ans<<endl;
    }
}