#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n;
    cin>>n;
    for(int i=10; i>0; i--){
        if (n%i==0){
            cout<<i;
            break;
        }
    }

    return 0;
}