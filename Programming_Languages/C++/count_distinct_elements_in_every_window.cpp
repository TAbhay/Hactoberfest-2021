#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define max3(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

void distinctelement(vi arr, ll n, ll k){
    unordered_map<ll ,ll> mp;
    forloop(i,0,k){
        mp[arr[i]]++;
    }
    cout<<mp.size()<<" ";
    forloop(i,k,n){
        mp[arr[i-k]]--;
        if (mp[arr[i-k]] == 0) mp.erase(arr[i-k]);
        if (mp.find(arr[i]) == mp.end()) mp.insert({arr[i], 1});
        else mp[arr[i]]++;

        cout<<mp.size()<<" ";
    }
}

void solve (){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vi arr(n);
    forloop(i,0,n){
        cin>>arr[i];
    }

    distinctelement(arr, n, k);


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}