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
    ll cntodd = 0;
    ll cnteven = 0;
    forloop(i,0,n){
        cin>>arr[i];
    }

    forloop(i,0,n){
        //cout<<"df="<<i%2<<endl;
        if (arr[i]%2) cntodd++;
        else cnteven++;
    }
    //cout<<cntodd<<" "<<cnteven<<endl;
    cout<<min(cnteven,cntodd)<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}