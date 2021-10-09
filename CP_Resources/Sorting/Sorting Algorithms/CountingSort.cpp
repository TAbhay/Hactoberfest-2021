#include <bits/stdc++.h>
using namespace std;

void countingsort(int arr[], int n, int k)
{
    int count[k] = {0};
    int output[n] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < k; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]--;
        output[count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int arr[] = {2, 4, 9, 1, 0, 0, 2, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    countingsort(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}