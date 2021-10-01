```c
#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void wavesort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            swap(A[i],A[i-1]);
        }
        if(i<n-1 && A[i]<A[i+1])
        {
            swap(A[i],A[i+1]);
        }
    }
}

int main()
{
    int n;
    cout<<"SIZE OF ARRAY IS : ";
    cin>>n;
    int A[n];
    cout<<"ENTER ELEMENTS OF ARRAY : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    wavesort(A,n);
    cout<<"SORTED ARRAY IS : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
```

```c
OUTPUT 1 :
SIZE OF ARRAY IS : 5
ENTER ELEMENTS OF ARRAY : 5 2 9 3 2 
SORTED ARRAY IS : 2 5 3 2 9 

OUTPUT 2 :
SIZE OF ARRAY IS : 6
ENTER ELEMENTS OF ARRAY : 3 2 9 6 4 1 
SORTED ARRAY IS : 2 3 6 4 1 9 
```
