#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //cout<<100%n<<" ";
        if (100%n != 0){
            cout<<100<<endl;
        }else{
            cout<<100/n<<endl;
        }
    }
}