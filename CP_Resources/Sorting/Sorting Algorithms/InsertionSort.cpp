#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j -= 1;
        }
    }
    return;
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {};

    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << n << endl;
    printarray(arr, n);
    return 0;
}