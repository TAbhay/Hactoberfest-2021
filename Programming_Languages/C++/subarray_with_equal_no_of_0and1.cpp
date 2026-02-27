#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n; i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

int longestarraywithequalnoof0and1(vi arr, int n){
    unordered_map<ll, ll> mp;
    ll pre_sum = 0;
    ll res = 0;
    forloop(i,0,n){
        if (arr[i]==0) pre_sum -= 1;
        else pre_sum+=arr[i];
        if (pre_sum == 0) res = i-1;
        if (mp.find(pre_sum) == mp.end()) mp.insert({pre_sum, i});
        if (mp.find(pre_sum) != mp.end()) res = max(res, i-mp[pre_sum]);
        //mp.insert({pre_sum,i});
    }
    return res;
}

void solve (){
    ll n;
    cin>>n;
    vi arr(n);
    forloop(i,0,n){
        cin>>arr[i];
    }
    cout<<longestarraywithequalnoof0and1(arr, n)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
