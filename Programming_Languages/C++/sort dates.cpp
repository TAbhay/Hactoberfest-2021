#include<bits/stdc++.h>

using namespace std;

#define ll long long int

void print(vector<ll> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

void countsort(vector<ll> &arr, int d, int m, int range){

    vector<ll>  farr(range);

    for(ll i=0;i<arr.size();i++){
        farr[stoi(to_string(arr[i] / d % m))]++;
    }

    for(ll i=1;i<range;i++){
        farr[i] = farr[i-1];
    }

    vector<ll> ans(arr.size());

    for(ll i=arr.size()-1;i>=0;i--){
        ll val = stoi(to_string(arr[i] /d % m));
        ll pos = farr[val] - 1;
        ll idx = pos -1;
        ans[idx] = arr[i];
        farr[val]--;
    }

}

void sortdates(vector<ll> &arr, ll n){
    countsort(arr, 1000000, 100, 32);
    cout<<endl;
    print(arr);
    cout<<endl;
    countsort(arr, 10000, 100,  13);
    cout<<endl;
    print(arr);
    cout<<endl;
    countsort(arr, 1, 10000, 2501);
    cout<<endl;
    print(arr);
}

int main(){
    ll n;
    cin>>n;
    vector<ll> dates(n);
    for(ll i=0;i<n;i++){
        cin>>dates[i];
    }

    sortdates(dates,n);
    return 0;
}