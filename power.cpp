#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll power(ll a, ll n, ll mod){
	if(n==1) return a%mod;
	if(n==0) return 1LL;
	ll p=power(a,n/2,mod);
	p=(p*p)%mod;
	if(n%2==0)
		return p;
	else
		return (p*a)%mod;
}

int main()
{
	ll a,n,mod;
	cin>>a>>n>>mod;
	ll p=power(a,n,mod);
	cout<<p<<endl;
}