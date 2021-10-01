#include <stdio.h>

int main(){
   int arr[70],n,i,j,temp;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   
   printf("Enter %d elements of the array\n",n);
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n-1;i++){
       for(j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }         
       }
   }
   printf("Sorted Array\n");
   for(i=0;i<n;i++){
       printf("%d\n",arr[i]);
   }
   return 0;
}



//optimized code for bubble sort in JAVA if array is given...
class Solution{
public static void bubbleSort(int arr[], int n){
        
        boolean swapped=false;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }
            }
            if(swapped==false){
                break;
            }
        }
        
    }
}
