#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        while(n--){
            ll a;
            cin>>a;
            if (a % d == 0) cout<<"YES"<<endl;
            else{
                int r = a % d + d * 10;
                if (a >= r) cout<<"YES"<<endl;
                else{
                    bool flag = false; 
                    for(ll i=1;i<=100;i++){
                        ll r = a - d * 1;
                        if (r>=0 && r%10 == 0){
                            flag = true;
                                //  break;
                        }
                    }
                    if (flag) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            }

        }
    }
    return 0;
}