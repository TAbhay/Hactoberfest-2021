#include<bits\stdc++.h>


using namespace std;

#define ll long long int

int main()
{
    int n;
    cin>>n;
    int arr1[2] = {};
    int arr2[2] = {};
    while(n--){
        int l,r;
        cin>>l>>r;
        arr1[l]++;
        arr2[r]++;
    }
    //cout<<arr1[0]<<"\t"; cout<<arr1[1]<<"\t";
    //cout<<arr2[0]<<"\t"; cout<<arr2[1]<<"\t";
    cout<<min(arr1[0] , arr1[1]) + min(arr2[0] , arr2[1]);
    return 0;
}
