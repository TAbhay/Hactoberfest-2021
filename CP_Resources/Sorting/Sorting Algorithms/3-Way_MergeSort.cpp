#include <iostream>
using namespace std;

void merge(int arr[], int l, int m1, int m2, int r)
{
    int n1 = m1 - l + 1;
    int n2 = m2 - m1;
    int n3 = r - m2;
    int arr1[n1], arr2[n2], arr3[n3];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[m1 + j + 1];
    }
    for (int k = 0; k < n3; k++)
    {
        arr3[k] = arr[m2 + k + 1];
    }
    int i = 0, j = 0, k = 0, t = l;
    while ((i < n1) && (j < n2) && (k < n3))
    {
        if (arr1[i] < arr2[j])
        {
            if (arr1[i] < arr3[k])
            {
                arr[t++] = arr1[i++];
            }
            else
            {
                arr[t++] = arr3[k++];
            }
        }
        else
        {
            if (arr2[j] < arr3[k])
            {
                arr[t++] = arr2[j++];
            }
            else
            {
                arr[t++] = arr3[k++];
            }
        }
    }
    while ((i < n1) && (j < n2))
    {
        if (arr1[i] < arr2[j])
        {
            arr[t++] = arr1[i++];
        }
        else
        {
            arr[t++] = arr2[j++];
        }
    }
    while ((i < n1) && (k < n3))
    {
        if (arr1[i] < arr3[k])
        {
            arr[t++] = arr1[i++];
        }
        else
        {
            arr[t++] = arr3[k++];
        }
    }
    while ((j < n2) && (k < n3))
    {
        if (arr2[j] < arr3[k])
        {
            arr[t++] = arr2[j++];
        }
        else
        {
            arr[t++] = arr3[k++];
        }
    }
    while (j < (n2))
    {
        arr[t++] = arr2[j++];
    }
    while (i < (n1))
    {
        arr[t++] = arr1[i++];
    }
    while (k < n3)
    {
        arr[t++] = arr3[k++];
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return; //returns recursively
    }
    int m1 = l + (r - l) / 3;
    int m2 = 1 + l + 2 * ((r - l) / 3);
    mergesort(arr, l, m1);
    mergesort(arr, m1 + 1, m2);
    mergesort(arr, m2 + 1, r);
    merge(arr, l, m1, m2, r);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = {12, 11, 13, 5, 7, 1, 2, 3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    mergesort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}