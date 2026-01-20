//IMPLEMENTING MAX XOR OF 2 NUMBERS IN AN ARRAY IN O(n*(log max)/log 2) ..O(n*63)--(because we are using 63 bits)-USING TRIE(basically creating binary tree)
//WE HAVE USED ll SO WE ARE USING HERE 63 BITS(NOT 64 AS THEN OVERFLOW WILL OCCUR)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll N=1e6+5,inf=1e18,mod=1e9+7;
#define test ll testcases;cin>>testcases; while(testcases--)
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

struct Linkedlist{
	struct Linkedlist *left;
	struct Linkedlist *right;
};

typedef struct Linkedlist *node;

void insert(vll v,node root)
{
	ll i;
	for(i=0;i<sz(v);i++)		//sz(v) is also 63
	{
		if(v[i]==0)
		{
			if(root->left==NULL)
			{
				node p=NULL;
				p=(node)malloc(sizeof(struct Linkedlist));
				p->left=NULL;
				p->right=NULL;
				root->left=p;
			}
			root=root->left;
		}
		else
		{
			if(root->right==NULL)
			{
				node p=NULL;
				p=(node)malloc(sizeof(struct Linkedlist));
				p->left=NULL;
				p->right=NULL;
				root->right=p;
			}
			root=root->right;
		}
	}
}

ll search(vll v,node root)
{
	ll i,k,w;
	k=0;
	w=pow(2,62);
	for(i=0;i<sz(v);i++)
	{
		if(v[i]==0)
		{
			if(root->right==NULL)
			{
				root=root->left;
			}
			else
			{
				root=root->right;
				k+=w;
			}
		}
		else
		{
			if(root->left==NULL)
			{
				root=root->right;
				k+=w;
			}
			else
			{
				root=root->left;
			}
		}
		w/=2;
	}
	return k;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,i,ma,a1,a2,p,q,r,val,j;
	cin>>n;
	ll a[n];
	vll v[n];
	node root=NULL;
	root=(node)malloc(sizeof(struct Linkedlist));
	root->left=NULL;
	root->right=NULL;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		val=a[i];
		while(val>0)
		{
			r=val%2;
			v[i].pb(r);
			val/=2;
		}
		for(j=sz(v[i]);j<63;j++)
		{
			v[i].pb(0);
		}
		reverse(all(v[i]));
		insert(v[i],root);
	}
	ma=0;
	for(i=0;i<n;i++)
	{
		p=a[i];
		q=search(v[i],root);
		if((p^q)>=ma)		//DON'T FORGET TO APPLY PARENTHESIS IN ANY OF THESE KIND OF OPERATIONS.
		{
			ma=p^q;
			a1=p;
			a2=q;
		}
	}
	cout<<a1<<" "<<a2<<"\n";	//XOR of these 2 numbers is maximum
	cout<<(a1^a2)<<"\n";	//printing maximum xor
	return 0;
}
