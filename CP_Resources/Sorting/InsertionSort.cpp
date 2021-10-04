#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)  //i=1 cause 0th  element is already sorted: condition of insertionSort.
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

//best case: O(n) 
//avg and worst case: O(n^2)