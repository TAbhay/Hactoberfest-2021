#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {

        k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[k])
            {

                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
    return;
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {39, 2555, 9, 81, 75, 7};

    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    printarray(arr, n);
    return 0;
}