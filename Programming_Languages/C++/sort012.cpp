#include<bits/sydc++.h>

using namespace std;

void sort012(int a[], int n){
    int i=0;
    int j=0;
    int k=n-1;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort012(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}