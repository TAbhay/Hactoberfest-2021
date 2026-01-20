#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

ll dp[1000005],ppow[1000005];


ll gethash(string s)
{
    ll val=0;
    ll p=31;
    ll pp=1;
    for(char ch:s)
    {
        val=(val+(((ch-'a'+1)*pp)%mod))%mod;
        pp=(pp*p)%mod;
    }
    return val%mod;
}

void init(string s)
{
    ll p=31,pp=1;
    ppow[0]=pp%mod;
    dp[0]=(s[0]-'a'+1);
    for(ll i=1;i<s.size();i++)
    {
        char ch=s[i];
        pp=(pp*p)%mod;
        ppow[i]=pp%mod;
        dp[i]=(dp[i-1]+((ch-'a'+1)*pp)%mod)%mod;
    }
}
ll subHash(ll l,ll r)
{
    ll ans=dp[r];
    if(l>0)ans=(ans-dp[l-1]+mod)%mod;
    return ans;
}

// int main(){
//     ll n;
//     while(cin>>n)
//     {
//         string n,h;
//         cin>>n>>h;
//         ll hash=gethash(n);
//         init(h);
//         for(ll i=0,j=n.size()-1;j<h.size();i++,j++)
//         {
//             if((hash*ppow[i])%mod==subHash(i,j))
//             cout<<i<<'\n';
//         }
//         cout<<'\n';
//     }
// }


// usage if((hash*ppow[i])%mod==subHash(i,j))