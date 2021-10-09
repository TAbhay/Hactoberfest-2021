#include <iostream>
using namespace std;

int selectionsort(int arr[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Sorted array in ascending order:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sorted array in descending order:" << endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int i, n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, n);
    return 0;
}


//for all case: O(n^2)