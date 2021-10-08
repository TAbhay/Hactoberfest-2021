#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums,int s,int e)
{
    int mid=(s+e)/2;
     int i=s;
    int j=mid+1;
    vector<int> temp(e-s+1);
    int k=0;
    while(i<=mid && j<=e)
    {
        if(nums[i]<=nums[j])
        {
            temp[k++]=nums[i++];
        }
        else{
            temp[k++]=nums[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=nums[i++];
    }
    while(j<=e)
    {
        temp[k++]=nums[j++];
    }
    for(int i=s;i<=e;i++)
    {
        nums[i]=temp[i-s];
    }
}
void mergesort(vector<int> &nums,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(nums,s,mid);
    mergesort(nums,mid+1,e);
    merge(nums,s,e);
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    mergesort(nums,0,n-1);
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}