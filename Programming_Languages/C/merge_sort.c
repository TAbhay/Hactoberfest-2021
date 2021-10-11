/*Algorithm: It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves */
#include<stdio.h>
void merge(int arr[],int l,int m,int r);
void mergesort(int arr[],int l,int r){
 if(l<r){
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
 }
}
void merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1];
    int right[n2];
    int a=0,b=0;
    int k=l;
    for(int i=0;i<n1;i++)
      left[i]=arr[l+i];
    for(int i=0;i<n2;i++)
      right[i]=arr[m+1+i];
    while (a<n1 && b<n2)
    {
        if(left[a]<=right[b])
        {
            arr[k]=left[a];
            a++;
        }
        else{
             if(left[a]>right[b])
          {
            arr[k]=right[b];
            b++;
          }
        }
        k++;
    }
    while(a<n1){
        arr[k]=left[a];
        a++;k++;
    }
       while(b<n2){
        arr[k]=right[b];
        b++;k++;
    }
}
void printarr(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int arr[6]={7,9,1,6,2,8};
    int n;
    n= sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting: ");
    printarr(arr,n);
    mergesort(arr,0,n-1);
    printf("After sorting: ");
    printarr(arr,n);
   return 0; 
}