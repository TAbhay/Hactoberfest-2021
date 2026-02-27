#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n,c;
    cin>>n>>c;
    ll mx = INT_MIN;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    for(ll i=0;i<n-1;i++){
        //cout<<arr[i] - arr[i+1]<<endl;
        mx = max(arr[i] - arr[i+1] , mx);
    }
    ll ans  = mx-c;
    if (ans<=0) cout<<0;
    else cout<<ans;
    return 0;
}