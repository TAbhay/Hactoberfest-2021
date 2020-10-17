#include <bits/stdc++.h>

using namespace std;
long long arr[1000][1000];

long long result(vector<int> &a, long long sum, long long i, long long n)
{
    if (n == sum)
        return 1;
    if (n > sum)
        return 0;
    if (i >= a.size())
        return 0;
    if (arr[n][i] == -1)
        arr[n][i] = result(a, sum, i, n + a[i]) + result(a, sum, i + 1, n);
    return arr[n][i];
}
int main()
{
    long long sum;
    cin >> sum;
    long long nos;
    cin >> nos;
    vector<int> a;
    for (int i = 0; i < nos; i++)
    {
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            arr[i][j] = -1;
        }
    }

    cout << result(a, sum, 0, 0);
}
