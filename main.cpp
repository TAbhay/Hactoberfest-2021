#include<stdio.h>


void swapValue(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int mPartition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swapValue(&arr[i], &arr[j]);
        }
    }
    swapValue(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int prt = mPartition(arr, low, high);


        quickSort(arr, low, prt - 1);
        quickSort(arr, prt + 1, high);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);

}


int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n =");
    printArray(arr, n);
    return 0;
}
