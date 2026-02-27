#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n;
    cin>>n;
    ll cnt = 0;
    ll rt=0,bt=0,rc=0,bc=0;

   // ll c,r b;
    while(n--){
        //cout<<"i="<<i<<endl;
       char c;
       ll r,b;
        cin>>c>>r>>b;
       
        ll df = max(r,b);
        while(max(rt - rc, (long long)0) < r || max(bt - bc, (long long)0) < b){
            rt++;
            bt++;
            cnt++;
        }

        if (c=='R')
            rc++;
        else bc++;
        cnt++; 
        cout<<"rt="<<rt<<" "<<"bt="<<bt<<" "<<"RC="<<rc<<" "<<"bc="<<bc<<endl<<"cnt="<<cnt<<endl;
    }

    cout<<cnt;
}