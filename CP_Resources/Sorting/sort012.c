// INPUT: 
// N = 5 
// arr[] = {0,1,2,1,0}
// OUTPUT:
// 0,0,1,1,2
#include <stdio.h>

void Swap(int *A,int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

void sort012(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            Swap(&arr[mid],&arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==2)
        {
            Swap(&arr[mid],&arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}