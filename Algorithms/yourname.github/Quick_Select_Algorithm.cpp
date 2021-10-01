#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{
    int ind=s;
    int pivot=a[e];
    
    for(int i=s;i<e;i++)
    {
        if(a[i]<=pivot)
            swap(a[i],a[ind++]);
    }
    
    swap(a[e],a[ind]);
    
    return ind;
}

int find_kth_smallest(int a[],int s,int e,int k)
{
    int pind=partition(a,s,e);
    
    if(k>pind)
        return find_kth_smallest(a,pind+1,e,k);
    else if(k<pind)
        return find_kth_smallest(a,s,pind-1,k);
    else
        return a[pind];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    cout<<find_kth_smallest(a,0,n-1,k-1);
}