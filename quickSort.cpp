#include<iostream>
using namespace std;

void swapping(int &a, int &b) { 
   int temp = a;
   a = b;
   b = temp;
}

int partition(int *arr, int lower, int upper) {
   int pivot, start, end;
   start = lower;
   end = upper;
   pivot = arr[lower];      

   while(start < end) {
      while(arr[start] <= pivot && start < end)
         start++;      

      while(arr[end] > pivot)
         end--;      
     
      if(start < end) 
         swap(arr[start], arr[end]); 
      
   }

   arr[lower] = arr[end];
   arr[end] = pivot;
   return end;
}

void quickSort(int *arr, int left, int right) {
   int q;

   if(left < right) {
      q = partition(arr, left, right);
      quickSort(arr, left, q-1);    
      quickSort(arr, q+1, right);   
   }
}

void printArray(int *arr, int n) {
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int *arr = new int[n]; 
   cout << "Enter elements:" << endl;
   
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array before Sorting: ";
   printArray(arr, n);
   
   quickSort(arr, 0, n-1);
   
   cout << "Array after Sorting: ";
   printArray(arr, n);
}
