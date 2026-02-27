#include<bits/stdc++.h>

using namespace std;

#define int long long 
#define max3(a,b,c) max(a,max(b,c))

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max3(a+b,b+c,a+c)<<endl;
    }
    return 0;
}