#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[pIndex], arr[i]);
            pIndex++;
        }
    }
    swap(arr[e], arr[pIndex]);
    return pIndex;
}

void quicksort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quicksort(arr, s, p - 1);
        quicksort(arr, p + 1, e);
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    quicksort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}