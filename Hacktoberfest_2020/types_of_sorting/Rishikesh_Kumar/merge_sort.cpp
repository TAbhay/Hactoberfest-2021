#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) a[i] = arr[l+i];
    for (int i = 0; i < n2; i++) b[i] = arr[mid+i+1];


    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] >= b[j])
        {
            arr[l+k] = b[j];
            j++;
        }
        else
        {
            arr[l+k] = a[i];
            i++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[l+k] = a[i];
        i++; k++;
    }

    while (j < n2) 
    {
        arr[l+k] = b[j];
        k++; j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r) return ;

    int mid = (l+r)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);

    return;
}

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(arr, 0, n-1);

    cout << "The sorted elements are: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}