//Time compexity is O(n);
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Linkedlist{
	ll data;
	struct Linkedlist *left;
	struct Linkedlist *right;
};

typedef struct Linkedlist *node;

ll fxn(node root,ll& ans)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		ll lheight=fxn(root->left,ans);
		ll rheight=fxn(root->right,ans);
		ans=max(ans,1+lheight+rheight);
		if(lheight>rheight)
		{
			return lheight+1;
		}
		else
		{
			return rheight+1;
		}
	}
} 

int main()
{
	ll t,x,i,u,j,ans;
	string s;
	cin>>t>>x;
	node head=NULL,temp;
	head=(node)malloc(sizeof(struct Linkedlist));
	head->left=NULL;
	head->right=NULL;
	head->data=x;
	for(j=1;j<=t-1;j++)
	{
		cin>>s>>x;
		temp=NULL;
		temp=head;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='L')
			{
				if(temp->left==NULL)
				{
					node p=NULL;
					p=(node)malloc(sizeof(struct Linkedlist));
					temp->left=p;
					p->left=NULL;
					p->right=NULL;
				}
				else
				{
					temp=temp->left;
				}
				if(i==s.size()-1)
				{
					if(temp->left==NULL)
					{
						node p=NULL;
						p=(node)malloc(sizeof(struct Linkedlist));
						temp->left=p;
						p->left=NULL;
						p->right=NULL;
						p->data=x;
					}
					else
					{
						temp=temp->left;
						temp->data=x;
					}
				}
			}
			else
			{
				if(temp->right==NULL)
				{
					node p=NULL;
					p=(node)malloc(sizeof(struct Linkedlist));
					temp->right=p;
					p->right=NULL;
					p->left=NULL;
				}
				else
				{
					temp=temp->right;
				}
				if(i==s.size()-1)
				{
					if(temp->right==NULL)
					{
						node p=NULL;
						p=(node)malloc(sizeof(struct Linkedlist));
						temp->right=p;
						p->left=NULL;
						p->right=NULL;
						p->data=x;
					}
					else
					{
						temp=temp->right;
						temp->data=x;
					}
				}
			}
		}
	}
	ans=0;						//if no node exist then diameter will be 0
	ll te=fxn(head,ans);		//te value has no significance.It is used just to store the return value...we have our diameter in ans
	cout<<ans<<"\n";
}
