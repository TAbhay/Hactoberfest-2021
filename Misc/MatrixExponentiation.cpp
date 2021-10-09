#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define N 101
int ar[N][N], I[N][N];

void mul(int A[][N], int B[][N], int dim)
{
    int res[dim][dim];
    rep(i, dim)
    {
        rep(j, dim)
        {
            res[i][j] = 0;
            rep(k, dim)
                res[i][j] += A[i][k] * B[k][j];
        }
    }
    rep(i, dim) rep(j, dim) A[i][j] = res[i][j];
}

void power(int A[][N], int dim, int n)
{
    rep(i, dim)
    {
        rep(j, dim)
        {
            if (i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
        }
    }
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            mul(A, A, dim);
        }
        else
        {
            n--;
            mul(I, A, dim);
        }
    }
    rep(i, dim) rep(j, dim) A[i][j] = I[i][j];
}

void printmatrix(int A[][N], int dim)
{
    rep(i, dim)
    {
        rep(j, dim)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int dim, n;
    cin >> dim >> n;
    int arr[N][N];
    rep(i, dim) rep(j, dim) cin >> arr[i][j];
    power(arr, dim, n);
    printmatrix(arr, dim);
    return 0;
}