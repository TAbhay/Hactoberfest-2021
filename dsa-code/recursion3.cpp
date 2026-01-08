#include <bits/stdc++.h>
using namespace std;

void mergeSort(int a[],int si,int ei)
{
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    mergeSort(a,si,mid);
    mergeSort(a,mid+1,ei);
    int outarr[ei+1];

    int i=0,j=mid,oi=0;
    while(i<=mid && j<= ei){
        if(a[i]<a[j]){
            outarr[oi]=a[i];
            i++;
            j++;
            oi++;
        }
        else{
            outarr[oi]=a[j];
            oi++;
            j++;

        }
    }

    while(i<=mid){
        outarr[oi]=a[i];
        oi++;
        i++;
    }

    while(j<=ei){
        outarr[oi]=a[j];
        j++;
        oi++;
    }

    for(int i=0;i<=ei;i++){
        a[i]=outarr[i];
    }
}


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    int a[]={4,8,4,6,5,12,25};
    mergeSort(a,0,6);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}

