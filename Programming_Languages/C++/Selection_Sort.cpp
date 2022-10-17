#include <iostream>
using namespace std;

void selectionSort(int *arr)
{
    for(int i = 11; i > 0; i--)
    {
        int max = 0;
        for( int j = 1; j <= i; j++)
        {
            if(arr[max] < arr[j])
            max = j;
        }
        if(arr[max] > arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
}

int main()
{
int arr[12] = {50, 48, 54, 59, 47, 49, 52, 51, 55, 53, 57, 58};
    

cout << "Unsorted:\n";
    for(int i = 0; i < 12; i++)
    {
        cout << arr[i];
        if(i < 11)
        cout << ", ";
    }
    cout << endl;

selectionSort(arr);
    
cout << "Sorted:\n";
    for(int i = 0; i < 12; i++)
    {
        cout << arr[i];
        if(i < 11)
        cout << ", ";
    }
    cout << endl;
}