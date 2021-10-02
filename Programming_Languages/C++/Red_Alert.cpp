#include<bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,h;
        cin>>n>>d>>h;
        int sum = 0;
        bool flag = false;
        while(n--){
            int x;
            cin>>x;
            if(x>0){
                sum+=x;
                if (sum>h) flag = true;
            }else if(x==0){
                if(sum<d) sum=0;
                else sum-=d;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}