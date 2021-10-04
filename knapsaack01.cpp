#include<bits/stdc++.h>
using namespace std;
int static t[5][8];

int main()
{
	int wt[] = {1,3,4,5};
	int val[] = {1,4,5,7};
	int w = 7;
	int n = sizeof(val)/sizeof(val[0]);
	for(int i=0;i<n+1;i++)
		for(int j=0;j<w+1;j++)
			if(i==0 || j==0)
				t[i][j]=0;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(wt[i-1]<=j)
				t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
			else
				t[i][j] = t[i-1][j];
		}
	}
	cout<<t[n][w]<<endl;

}
