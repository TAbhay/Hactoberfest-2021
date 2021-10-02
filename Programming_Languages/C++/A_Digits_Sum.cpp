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
        ans = n/10;
        if (n%10==9) ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}