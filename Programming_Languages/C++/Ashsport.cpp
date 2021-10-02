#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n;
    cin>>n;
    vector<ll> winners;
    for(ll i=0;i<n;i++){
        ll r,s;
        cin>>s>>r;
        ll sp = s+r;
        winners.push_back(sp);
    }

    ll spid = *max_element(winners.begin(), winners.end());
    for(ll i=0;i<winners.size();i++){
        if (winners[i]==spid) cout<<i+1<<" ";
    }
}