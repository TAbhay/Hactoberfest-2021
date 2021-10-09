#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    bool done = false;
    int i;
    while (!done)
    {
        done = true;
        i = 0;
        while (i < (n - 1))
        {
            if (arr[i] > arr[i + 1])
            {
                done = false;
                swap(arr[i], arr[i + 1]);
            }
            i++;
        }
    }
}

int main()
{
    int arr[] = {5, 4, 30, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}