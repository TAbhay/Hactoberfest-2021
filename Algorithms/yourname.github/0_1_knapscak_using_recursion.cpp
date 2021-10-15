#include <iostream>
using namespace std;


// time complexity is 2 power n
int KnapSack_recursion(int val[], int wt[], int W, int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + KnapSack_recursion(val, wt, W - wt[n - 1], n - 1), KnapSack_recursion(val, wt, W, n - 1));
    }

    else if(wt[n-1] > W){
        return KnapSack_recursion(val,wt,W,n-1);
    }
}
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << KnapSack_recursion(val, wt, W, n);
    return 0;
}