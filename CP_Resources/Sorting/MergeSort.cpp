//based on Divide and Conquer mechanism.

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    //merging the arrays: 1st- from l to mid and 2nd- mid to r; both arrays are sorted.
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; //temp arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    { //if ith pointer is at end while j pointer is not at end
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = { 5, 4, 3, 2, 1 };
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//time complexity: 
/* T(n) = 2T(n/2) + n; }*1  divded the two array, it took n/2 time therefore it is 2T(n/2) and after adding them to merge it took n time.
T(n/2) = 2T(n/4) + n/2; }*2
T(n/4) = 2T(n/8) + n/4; }*4
..
..
T(1) = 1;

T(n) = n+n+ .... logn terms
{T(n) = n Logn} 

n/2^K = 1;
n = 2^K
K = logn

*/