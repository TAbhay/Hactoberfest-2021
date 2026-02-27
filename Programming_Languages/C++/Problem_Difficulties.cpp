#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        unordered_set<int> st;
        for(int i=0;i<4;i++){
            ll x;
            cin>>x;
            if (st.find(x) == st.end()) st.insert(x);
        }

        if (st.size()>=3) cout<<2<<endl;
        else if (st.size() == 2) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}