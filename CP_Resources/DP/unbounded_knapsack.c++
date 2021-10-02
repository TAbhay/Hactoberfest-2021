//this is a same probelem as 0-1 knapsack but here we can choose item any number of time
//the famous problem is :Given a knapsack weight W and a set of n items with certain value vali and weight wti, we need to calculate the maximum amount that could make up this quantity exactly.
/* W = 8
       val[] = {10, 40, 50, 70}
       wt[]  = {1, 3, 4, 5}       
ans-> 110*/

#include<bits/stdc++.h>
using namespace std;


int unboundedKnapsack(int W, int n,
					int val[], int wt[])
{
	
	int dp[W+1];
	memset(dp, 0, sizeof dp);

	
	for (int i=0; i<=W; i++)
	for (int j=0; j<n; j++)
		if (wt[j] <= i)
			dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);

	return dp[W];
}

int main()
{
	int n;
	cin>>n;
	int val[n];
	int wt[n];
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}

	int W;
	cin>>W;
	cout << unboundedKnapsack(W, n, val, wt);

	return 0;
}
