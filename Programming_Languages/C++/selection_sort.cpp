#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int k_val, j;

    for (int i = 0; i < n-1; i++)
    {
        k_val = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[k_val])
            k_val = j;
 
        swap(&arr[k_val], &arr[i]);
    }

	for (int l = 0; l < n; l++)
	cout << arr[l] << " ";

	return 0;
}
