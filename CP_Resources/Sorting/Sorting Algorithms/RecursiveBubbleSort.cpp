#include <bits/stdc++.h>
using namespace std;

void recbubble(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < (n - 1); i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    recbubble(arr, n - 1);
}
int main()
{
    int arr[] = {51, 4, 30, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    recbubble(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}