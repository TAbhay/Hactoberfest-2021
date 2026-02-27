#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        ll thief = n-x + m-y;
        ll police = n-a + m-b - min(n-a,m-b);
        cout<<((thief<=police)?"YES\n":"NO\n");
    }
}