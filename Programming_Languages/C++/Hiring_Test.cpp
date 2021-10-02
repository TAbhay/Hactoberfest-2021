#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m;
        cin>>x>>y;
        while(n--){
            string res;
            cin>>res;
            ll cmp = 0;
            ll par = 0;
            for (int i=0;i<m;i++){
                if (res[i]=='F') cmp++;
                else if(res[i]=='P') par++;
            }

            if (cmp>=x || (cmp==x-1 && par >= y)) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
}