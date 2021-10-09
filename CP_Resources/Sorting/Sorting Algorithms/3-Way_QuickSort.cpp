#include <iostream>
using namespace std;

int partition(int arr[], int s, int e, int &i, int &j)
{
    if ((e - s) <= 1)
    {
        if (arr[e] < arr[s])
        {
            swap(arr[s], arr[e]);
        }
        i = s;
        j = e;
        return;
    }
    int mid = s;
    int pivot = arr[e];
    while(mid<=e)
    {
        if(arr[mid]<=arr[s])
        {
            swap(arr[s++],arr[mid++]);
        }
        else if(Arr[mid]==arr[s]) 
    }
}