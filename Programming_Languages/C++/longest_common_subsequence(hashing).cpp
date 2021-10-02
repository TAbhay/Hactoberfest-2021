#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

int longestcommmonsequence(vi arr, ll n){
    unordered_set<ll> s;
    forloop(i,0,n){
        s.insert(arr[i]);
    }
    ll curr=0,res=0;
    forloop(i,0,n){
        if (s.find(arr[i]-1) == s.end()){
            curr = 1;
            while(s.count(arr[i]+curr)) curr++;
        }
        res = max(res, curr);
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

    cout<<longestcommmonsequence(arr, n)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}