#include<bits/stdc++.h>

using namespace std;

void removeele(int *arr, int mn, int r){
    int pos;
    for(int i=0;i<=r;i++){
        if (arr[i]==mn){
            pos = i;
        }
    }
    //cout<<"pos = "<<pos<<"  r= "<<r<<endl;
    //cout<<"element removed = "<<arr[pos]<<endl;
    for(int i = pos; i<r;i++){
        arr[i] = arr[i+1];
    }

    //cout<<"array after removal of "<<endl;
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }

    //cout<<endl<<"-------------"<<endl;
}

int kthsmallest(int arr[], int l , int r, int k){
    int mn;
    for(int i=0;i<k-1;i++){
        mn = INT_MAX;
        for(int j=0;j<r+1;j++){
            if (arr[j]<mn) mn = arr[j];
        }
        removeele(arr, mn, r);
        r = r-1;
    }
    mn = INT_MAX;
    //cout<<"r = "<<r<<endl;
    for(int i=0;i<r+1;i++){
        if (arr[i]<mn) mn = arr[i];
    }
    return mn;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = kthsmallest(arr, 0, n-1, k);
    cout<<ans<<endl;
    return 0;
}