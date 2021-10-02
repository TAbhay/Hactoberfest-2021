#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a;
        cin>>n>>a;
        ll prev = floor(sqrt(n));
        cout<<prev*a<<endl;
    }
    return 0;
}