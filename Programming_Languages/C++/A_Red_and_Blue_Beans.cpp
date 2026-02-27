#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r,b,d;
        cin>>r>>b>>d;
        if (r>b){
            if (b>=1 && r/b - 1 <= d && (r/b + r%b) - 1 <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if (b>r){
            if (r>=1 && b/r - 1 <= d && (b/r + b%r) - 1 <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if (r-b <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}