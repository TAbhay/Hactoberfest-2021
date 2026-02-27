#include<bits/stdc++.h>

using namespace std;

#define ll long long int;

int main(){
    string n;
    cin>>n;
    char ld = n[n.size()-1];
    int idx = n.size()-1;
    bool flag = false;
    int mn = INT_MAX;
    int id;
    for(int i=0;i<n.size();i++){
        if (int(n[i])%2==0){
            if ((n[i]-'0')<n[n.size()-1]-'0'){
                swap(n[i],n[n.size()-1]);
                cout<<n;
                return 0;
            }
            id = i;
            flag = true;
        }
        
    }
    if (flag){
        swap(n[n.size()-1], n[id]);
        cout<<n;
    }
    else cout<<"-1";
    return 0;
    
}