#include <iostream>
using namespace std;

void insertion(int arr[], int n);

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    insertion(arr, n);

    cout << "The sorted elements are : ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i], j = i-1;

        while (j >= 0 && curr < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = curr;

    }
}