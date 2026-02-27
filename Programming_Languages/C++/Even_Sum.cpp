#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

void solve (){
    ll n;
    cin>>n;
    vi arr(n);
    forloop(i,0,n){
        cin>>arr[i];
    }
    ll sum = 0;
    forloop(i,0,n){
        sum+=arr[i];
    }

    if (sum%2) cout<<2<<endl;
    else cout<<1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}