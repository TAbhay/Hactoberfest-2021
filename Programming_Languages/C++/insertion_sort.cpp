#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 21, 12, 4, 25, 34 , 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int k_val, j;

	for (int i = 1; i < n; i++)
	{
		k_val = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > k_val)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = k_val;
	}

	for (int l = 0; l < n; l++)
	cout << arr[l] << " ";

	return 0;
}
