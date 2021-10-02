#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        unordered_set<ll> task;
        ll n;
        cin>>n;
        string str;
        cin>>str;
        bool flag = true;
        task.insert(str[0]);
        for(ll i=1;i<n;i++){
            if (str[i] != str[i-1]){
                if (task.find(str[i]) == task.end())
                    task.insert(str[i]);
                else{
                    flag = false;
                    break;
                }
            } else continue;
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}