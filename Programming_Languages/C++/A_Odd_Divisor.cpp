#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<=n;i++)
#define max(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

void solve (){
    ll n;
    cin>>n;
    bool flag = false;
    for(ll i=3;i<n;i+=2){
        if (n%i == 0){
            flag = true;
            break;
        }
    }
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}