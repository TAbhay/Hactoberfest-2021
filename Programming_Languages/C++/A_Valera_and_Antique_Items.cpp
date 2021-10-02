#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n,v;
    cin>>n>>v;
    ll cnt = 0;
    vector<ll> sell;
    for(ll i=1;i<=n;i++){
        ll s;
        cin>>s;
        vector<int> price(s);
        for(ll j=0;j<s;j++){
            cin>>price[j];
        }

        for(ll j=0;j<s;j++){
            if (price[j] < v){
                cnt++;
                sell.push_back(i);
                break;
            }
        }
    }
    sort(sell.begin(), sell.end());
    cout<<cnt<<endl;
    for(ll i=0;i<sell.size();i++){
        cout<<sell[i]<<" ";
    }   
}