    #include<bits/stdc++.h>

    using namespace std;

    #define int long long int
    #define cases int t;cin>>t;while(t--)

    int32_t main(){
        cases{
            int n;
            cin>>n;
            int a,b,c;
            for(a=2;a*a*a<=n;a++){
                if(n%a==0){
                    break;
                }
            }
            int rem = n/a;
            for(b=a+1;b*b<=rem;b++){
                if(rem%b==0){
                    c = rem/b;
                    if(b>=c) c = 0;
                    break;
                }
            }
            if(a*b*c == n){
                cout<<"YES"<<endl;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }else cout<<"NO"<<endl;
        }

        return 0;
    }
