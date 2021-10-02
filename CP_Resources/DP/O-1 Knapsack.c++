/*O-1 knapsack probelm state that to get maximum profit of a product you have only two 
option either you have to choose it or reject it*/
//Recursion
#include<bits/stdc++.h>
using namespace std;
int knapSack_bottomup_dp(int W, int wt[], int val[], int n)
{
    int i, w;
      vector<vector<int>> K(n + 1, vector<int>(W + 1));
      
 
   
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

///Recursive code 
int knapSack_rec(int W, int wt[], int val[], int n)
{
 
  //Base case
    if (n == 0 || W == 0)
        return 0;
 
 //Rejecting element
    if (wt[n - 1] > W)
        return knapSack_rec(W, wt, val, n - 1);
 
 //accepting and find maximum
    else
        return max(
            val[n - 1]
                + knapSack_rec(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack_rec(W, wt, val, n - 1));
}
 

int main()
{
	//no of item
	int n;
	cin>>n;
	//value of item
	int val[n];
	//weight of item
	int wt[n];
	//maximum weight can hold by the bag
	int W;
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	
	cin>>W;
    ///Recursive Code
    cout << knapSack_rec(W, wt, val, n)<<endl;
    //Bottom up dp
    cout<<knapSack_bottomup_dp(W,wt,val,n)<<endl;
    return 0;
}