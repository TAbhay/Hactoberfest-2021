#include <bits/stdc++.h>
using namespace std;

int findMedian(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n / 2];
}

int Kthsmallest(int arr[], int l, int r, int k)
{

    if (k > 0 && (k <= (r - l + 1)))
    {
        int n = (r - l + 1);
        int i, median[(n + 4) / 5];
        for (int i = 0; i < (n / 5); i++)
            median[i] = findMedian(arr + l + i * 5, 5);
        if (i * 5 < n)
        {
            median[i] = findMedian(arr + l + i * 5, n % 5);
            i++;
        }
        int medofmed = (i == 1) ? median[i - 1] : Kthsmallest(median, 0, i - 1, i / 2);
    }
}
