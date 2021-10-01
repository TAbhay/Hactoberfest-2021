
//Modified Quick sort to sort in decreasing order.

#include<iostream>
using namespace std;
int *arr;      //declare a global array.

int partition(int left, int right)  //function to partition the array.
{

    int high = right;
    int low = left;
    int pivot = arr[left];      //taking left most element as pivot.
    while(left<right)
    {
        // Send all the smaller element on the right side of pivot and all the larger element on the left side of pivot.
        while((left<=high) && (arr[left]>=pivot))
        left++;
        while(arr[right]<pivot)
        right--;
        
        if((right>=low) && (left<right))  
        swap(arr[left],arr[right]);
    }

    swap(arr[low],arr[right]);
    return right; 
    //return the new pivot.

}

void quick_sort(int left, int right)
{
    if(right>left)
    {
      int pivot = partition(left,right);
      // call the quick_sort for both of the subarray.
      quick_sort(left,pivot-1);
      quick_sort(pivot+1,right);
    }
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;                 //Taking size of array from user.

    arr = new int(n);
    cout<<"Enter "<<n<<" elements\n";
    for(int i=0;i<n;i++)     //Input from user
    cin>>arr[i];
    quick_sort(0,n-1);       //calling quick_sort function
    cout<<"Sorted array :\n";
    for(int i=0;i<n;i++)     //printing sorted array.
    cout<<arr[i]<<" ";
    cout<<endl;
}