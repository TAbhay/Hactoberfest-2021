// ### Question Link : https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#


// SOLUTION : ( Accepted )

```
class Solution{
public:
    int knapSack(int n, int sum, int val[], int weight[])
    {
    int dp[sum+1] ={0};

    dp[0] = 0;
    for(int i=1; i<=sum; i++){
        for(int j=0; j<n; j++){
            if(weight[j]<=i){
                dp[i] = max(dp[i],(dp[i-weight[j]]+val[j]));
            }

        }
    }
    return dp[sum];
    }
};
```
