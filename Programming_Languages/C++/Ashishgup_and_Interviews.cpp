#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

void solve (){
    ll n,k;
    cin>>n>>k;
    vi arr(n);
    forloop(i,0,n){
        cin>>arr[i];
    }
    bool bot = true;
    bool reject = false;
    bool flag;
    ll nd = 0;
    //cout<<ceil(double(n/2))<<endl;
    forloop(i,0,n){
        if (arr[i]==-1){
            nd++;
            if (nd > ceil(double(n/2))){
                reject = true;
                break;
            }
            //cout<<"nd="<<nd;
        }
        else if (arr[i] > k){
            //cout<<"Too Slow"<<endl;
            flag = false;
            continue;
        }
        else if (arr[i] > 1 || nd > 0){
            bot = false;
            continue;
        }

        else flag = true;
    }

    if (bot) cout<<"Bot"<<endl;
    else if (reject) cout<<"Rejected"<<endl;
    else if (flag) cout<<"Accepted"<<endl;
    else cout<<"Too Slow"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}