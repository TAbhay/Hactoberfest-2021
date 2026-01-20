//HACTOBERFEST
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=1e6+5,inf=1e18,mod=1e9+7;
#define test ll testcases;cin>>testcases; while(testcases--)
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

ll a[N],tree[2*N];		//tree has 2*n-1 nodes

void build(ll node,ll start,ll end)		//Assume this node as root
{
	if(start==end)
	{
		// Leaf node will have a single element
		tree[node]=a[start];
	}
	else
	{
		ll mid=(start+end)/2;
		// Recurse on the left child
		build(2*node,start,mid);
		// Recurse on the right child
		build(2*node+1,mid+1,end);
		// Internal node will have the minimum of both of its children
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

void update(ll node,ll start,ll end,ll idx,ll val)
{
	if(start==end)
	{
		//Leaf node
		a[idx]=val;
		tree[node]=val;
	}
	else
	{
		ll mid=(start+end)/2;
		if(start<=idx && idx<=mid)
		{
			// If idx is in the left child, recurse on the left child
			update(2*node,start,mid,idx,val);
		}
		else
		{
			// If idx is in the right child, recurse on the right child
			update(2*node+1,mid+1,end,idx,val);
		}
		// Internal node will have minimum of both of its children
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

ll query(ll node,ll start,ll end,ll l,ll r)
{
	if(start>r || end<l)
	{
		// range represented by a node is completely outside the given range
		return inf;
	}
	else if(l<=start && end<=r)
	{
		// range represented by a node is completely inside the given range
		return tree[node];
	}
	// range represented by a node is partially inside and partially outside the given range
	ll mid=(start+end)/2;
	ll p1=query(2*node,start,mid,l,r);
	ll p2=query(2*node+1,mid+1,end,l,r);
	return min(p1,p2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,q,x,y;
    char ch;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
    	cin>>a[i];
    }
    build(1,1,n);	//passing root as 1 and starting as 1, ending as n
   	while(q--)
    {
    	cin>>ch>>x>>y;
    	if(ch=='q')
    	{
    		cout<<query(1,1,n,x,y)<<"\n";
    	}
    	else
    	{
    		update(1,1,n,x,y);
    	}
    }
	return 0;
}
