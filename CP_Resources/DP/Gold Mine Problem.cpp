// ## Question : https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1#

// ### Video Solution : https://www.youtube.com/watch?v=hs0lilfJ7C0&t=187s

// Solution : (DP Tabluation) Shows TLE for some reason 

```
class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int max_sum[n][m];
        
        for(int j = n-1; j>=0; j--){
            for(int i=m-1;i>=0;i--){
                if(j==n-1){
                    max_sum[0][j] = M[i][j];
                }else if(i==0){
                    max_sum[i][j] = max(M[i][j+1],M[i+1][j+1]) + M[i][j];
                }else if(i=n-1){
                    max_sum[i][j] = max(M[i-1][j+1],M[i][j+1]) + M[i][j];
                }else{
                    max_sum[i][j] = max(M[i+1][j+1],max(M[i-1][j+1],M[i][j+1])) + M[i][j];
                }
            }
    }
    
    int max_final =  max_sum[0][0];
    for(int i=1;i<m;i++)
    {
        max_final = max(max_final, max_sum[i][0]);
    }
    return max_final;
    }
};
```
