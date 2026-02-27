#include<bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int cnt = 0;
        int last = INT_MIN;
        for(int i=0;i<n;i++){
            if(str[i]=='0') continue;
            if(i-last <= k+1){
                last = min(last+k, i+1);
            }else{
                cnt++;
                last = i+1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}