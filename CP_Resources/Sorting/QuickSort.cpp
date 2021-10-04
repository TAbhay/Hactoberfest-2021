// #include <iostream>
// using namespace std;

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int pivot = arr[r];  //pivot is at end point.
//     int i = l - 1;

//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
//     }
// }

// int main()
// {
//     int arr[] = {12,5,19,33,1};
//     quickSort(arr, 0, 4);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Time Complexity:
/*Depends on pivot
1. In best case, pivot  would be median element
2. In worsr case, pivot would be end element.

in best case: O(nLogn)
which is same as mergeSort, see the method in mergeSort.cpp

In worst case: O(n^2) : Ex: Take a sorted array: 10 20 30 40 50 60 70, in this array pivot element will always be the end element, therefore time complexity will be n^2.
T(n)=T(n-1) + n;
T(n-1) = T(n-2) + n-1;
continue the series you will find T(n)=O(n^2)
*/

//2nd method to solve quicksort when pivot is at starting position.

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l;
    int j = r;
    while (i < j)
    {
        while (i <= r && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= l && arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr, i, j);
        }
    }
    swap(arr,l,j);
    return j;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {12, 33, 1, 5, 4};
    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}