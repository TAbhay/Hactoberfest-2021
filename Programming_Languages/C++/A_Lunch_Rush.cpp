#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n,k;
    cin>>n>>k;
    ll joy = INT_MIN;
    while(n--){
        ll f,t;
        cin>>f>>t;
        ll maza;
        if (t > k) maza = f - (t - k);
        else maza = f;
        joy = max(joy, maza);
    }

    cout<<joy;
    return 0;
}