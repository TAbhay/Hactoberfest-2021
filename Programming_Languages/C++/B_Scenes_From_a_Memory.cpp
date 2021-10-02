#include<bits/stdc++.h>

using namespace std;

#define int long long
#define cases int t;cin>>t;while(t--)

vector<bool> primes(100, true);

void solve(int n, string s){
    for(int i=0;i<n;i++){
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            cout<<1<<endl;
            cout<<s[i]<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(!primes[(s[i]-'0')*10 + (s[j]-'0')]){
                cout<<2<<endl;
                cout<<s[i]<<s[j]<<endl;
                return;
            }
        }
    }
    //cout<<"Efdfds"<<endl;

}

int32_t main(){

    for(int i=2;i<100;i++){
        for(int j=2; j*j<=i;j++){
            if(i%j == 0) primes[i] = false;
        }
    }
    cases{
        int n;
        string s;
        cin>>n;
        cin>>s;
        //string str = to_string(s);
        solve(n,s);
    }
    return 0;
}
