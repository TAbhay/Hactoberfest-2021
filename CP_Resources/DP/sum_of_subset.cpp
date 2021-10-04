#include<bits/stdc++.h>
using namespace std;
static int t[100][100];


//count number of subset_sum possible
int SOS(vector<int> arr, int sum, int n)
{
	if (sum == 0)
		return 1;
	if (n <= 0)
		return 0;
	if (t[n - 1][sum] != -1)
		return t[n - 1][sum];
	if (arr[n - 1] > sum)
		return t[n - 1][sum] = SOS(arr, sum, n - 1);
	return t[n - 1][sum] = SOS(arr, sum - arr[n - 1], n - 1) + SOS(arr, sum, n - 1);
}
int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);

	for (auto x& : arr)
		cin >> x;
	int sum;
	cin >> sum;

	memset(t, -1, sizeof(t));
	cout << SOS(arr, sum, n) << endl;
}
