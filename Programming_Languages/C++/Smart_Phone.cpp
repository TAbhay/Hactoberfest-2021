#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n;
    cin>>n;
    vector<ll> cust(n);
    for(ll i=0;i<n;i++){
        cin>>cust[i];
    }

    sort(cust.begin(), cust.end());
    ll mx_profit = INT_MIN;
    ll potc = n;
    for(int i=0;i<n;i++){
        ll profit = cust[i]*potc;
        potc--;
        if (profit > mx_profit){
            mx_profit = profit;
        }
    }

    cout<<mx_profit;
    return 0;
}