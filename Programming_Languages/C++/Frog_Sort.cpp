#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int findindex(vector<ll> &v, int k){
    auto it = find(v.begin(), v.end(), k);
    if (it != v.end()){
        ll index = it - v.begin();
        return index;
    }
    return -1;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll count = 0;
        cin>>n;
        vector<ll> w(n);
        for(ll i=0;i<n;i++){
            cin>>w[i];
        }

        vector<ll> pos(n);
        for(ll i=0;i<n;i++){
             pos[i] = i;
        }

        vector<ll> l(n);
        for(ll i=0;i<n;i++){
            cin>>l[i];
        }

        vector<ll> b(n);
        for(ll i=0;i<n;i++){
            b[i] = w[i];
        }

        sort(b.begin(), b.end());

        for(ll j=1;j<n;j++){
            ll index = findindex(w, b[j]);
            ll p = pos[findindex(w, b[j-1])];
            ll c = index;

            while(c<=p){
                c += l[index];
                pos[index] = c;
                count ++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}