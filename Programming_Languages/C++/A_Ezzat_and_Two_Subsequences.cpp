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
        //cout<<"wfegvw";
        long long sum = 0; 
        ll mx = arr[0]; 
        for(ll i=0;i<n;i++){
            if(arr[i]>mx) mx = arr[i];
            sum+=arr[i];
        }
        cout<<fixed<<setprecision(9)<<1.0*(sum-mx)/(n-1) + mx<<endl;
    }
    return 0;
}