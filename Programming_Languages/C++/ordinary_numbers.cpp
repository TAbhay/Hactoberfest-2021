#include<bits/stdc++.h>

using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll res = 0;
        for(ll p=1 ; p<=n ; p = p*10+1){
            for(ll d = 1;d<=9;d++){
                if (p*d <= n) res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}