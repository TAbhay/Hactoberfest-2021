#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    bool swap_check = true;
    cout << "Enter the amount of numbers to sort: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
   // int num;

    // Input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // Selection Sort
    
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
         int s=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=s;
    }
   // Output
    cout << "\nSorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
} 
   
