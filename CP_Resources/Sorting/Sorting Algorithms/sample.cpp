#include <bits/stdc++.h>
using namespace std;

int prefixSum(vector<int> A, int k)
{
    if (k <= 0)
        return 0;
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += A[i];
    }
    return res;
}

int suffixSum(vector<int> A, int k)
{
    if (k <= 0)
        return 0;
    int res = 0, n = A.size();
    int i = n - k;
    while (i < n)
    {

        res += A[i];
        i++;
    }
    return res;
}

int solve(vector<int> &A, int B)
{

    int ans = INT_MIN;
    for (int i = 0; i < B; i++)
    {

        ans = max(ans, suffixSum(A, B - i - 1) + prefixSum(A, i + 1));
    }
    return ans;
}
int main()
{
    int arr[] = {31, 12, 22, 27, 13, 4, 50, 52, 6, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v = {5, -2, 3, 1, 2};
    cout << solve(v, 4) << endl;
    cout << suffixSum(v, 3);
    cout << suffixSum(v, 2);
    cout << suffixSum(v, 1);

    cout << endl;
    return 0;
}