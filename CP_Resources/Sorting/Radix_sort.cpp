// cpp code for radix sort
#include<bits/stdc++.h> 
using namespace std; 

void countingSort(int arr[], int n, int exp) 
{ 
    int output[n];  
    int count[10] = { 0 }; 
    for (int i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
  
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (int i = n - 1; i >= 0; i--) { 
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
  
    for (int i = 0; i < n; i++) 
        arr[i] = output[i]; 
}  
 
void radixsort(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
  
    for (int exp = 1; mx / exp > 0; exp *= 10) 
        countingSort(arr, n, exp); 
} 

int main() 
{ 
    int arr[] = { 319,212,6,8,100,50 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    radixsort(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 
