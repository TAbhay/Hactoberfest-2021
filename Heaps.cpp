//HACTOBERFEST
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=1e6+5,inf=1e18,mod=1e9+7;
#define test long int t;cin>>t; while(t--)
#define lp(var,start,end) for (ll var = start; var <end ; ++var)
#define rlp(var,start,end) for(ll var = start; var>=end ; var--)
#define pb push_back
#define mp make_pair
#define pf push_front
#define ff first
#define ss second
#define vll vector<ll>
#define vld vector<ld>
#define pll pair<ll,ll> 
#define pld pair<ld,ld> 
#define vpll vector<pll>
#define vpld vector<pld>
#define all(X) X.begin(),X.end()
#define sz(x) ((ll)((x).size()))
const ld pi=3.141592653589793238;

bool check_prime(ll n)
{
	ll flag=0,i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	{
		return false;
	}
	else if(flag==0 || n==2 || n==3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ll fastexpo(ll a,ll b,ll MOD) 
{
	ll result=1;
	while(b>0)
	{
		if(b%2==1)
		{
			result=(result*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b/2;
	}
	return result;
}
ll a[10000007];

void max_heapify(ll i,ll n)
{
	ll left=2*i;
	ll right=2*i+1;
	ll largest;
	if(left<=n && a[i]<a[left])
	{
		largest=left;
	}
	else
	{
		largest=i;
	}
	if(right<=n && a[largest]<a[right])
	{
		largest=right;
	}
	if(largest!=i)
	{
		swap(a[largest],a[i]);
		max_heapify(largest,n);
	}

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,q,p,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	cin>>a[i];
    }
    for(i=n/2;i>=1;i--)
    {
    	max_heapify(i,n);
    }
    cin>>q;
    while(q--)
    {
    	cin>>p;
    	if(p==1)
    	{
    		cin>>x;
    		n++;
    		a[n]=x;
    		swap(a[1],a[n]);
    		max_heapify(1,n);
    	}
    	else
    	{
    		cout<<a[1]<<"\n";
    	}
    }
	return 0;
}
