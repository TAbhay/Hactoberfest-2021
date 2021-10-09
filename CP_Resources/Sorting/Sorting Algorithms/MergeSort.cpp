#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[mid + j + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (j < (n1))
    {
        arr[k++] = arr2[j++];
    }
    while (i < (n2))
    {
        arr[k++] = arr1[i++];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return; //returns recursively
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
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

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}