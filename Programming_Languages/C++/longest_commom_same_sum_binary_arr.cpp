#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n; i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

int longestcommonspan(vi arr1, vi arr2, int n){
    vi arr(n);
    forloop(i,0,n){
        arr[i] = arr1[i] - arr2[i];
    }
    unordered_map<ll, ll> mp;
    ll pre_sum = 0;
    ll res = 0;
    forloop(i,0,n){
        pre_sum+=arr[i];
        if (pre_sum == 0) res = i-1;
        if (mp.find(pre_sum) == mp.end()) mp.insert({pre_sum, i});
        if (mp.find(pre_sum) != mp.end()) res = max(res, i-mp[pre_sum]);
    }
    return res;
}

void solve (){
    ll n;
    cin>>n;
    vi arr1(n);
    vi arr2(n);
    forloop(i,0,n){
        cin>>arr1[i];
    }
    forloop(i,0,n){
        cin>>arr2[i];
    }
    cout<<longestcommonspan(arr1, arr2, n)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
