#include<bits/stdc++.h>
using namespace std;
int static t[100][100];

int knapsack(int wt[], int val[], int w, int n)
{
	if (w == 0 || n == 0)
		return 0;

	if (t[w][n] != -1)
		return t[w][n];
	if (wt[n - 1] > w)
		return t[w][n] = knapsack(wt, val, w, n - 1);
	int a = knapsack(wt, val, w - wt[n - 1], n - 1) + val[n - 1];
	int b = knapsack(wt, val, w, n - 1);
	return t[w][n] = max(a, b);
}
int main()
{
	int wt[] = {1, 3, 4, 5};
	int val[] = {1, 4, 5, 7};
	int w = 7;
	int n = sizeof(wt) / sizeof(int);
	memset(t, -1, sizeof(t));
	cout << knapsack(wt, val, w, n) << endl;
}
