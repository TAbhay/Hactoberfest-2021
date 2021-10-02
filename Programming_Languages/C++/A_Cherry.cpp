#include<bits/stdc++.h>

using namespace std;

#define ll long long int    

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans = 0;
        for(ll i=1;i<n;i++){
            ans = max(ans, arr[i]*arr[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}