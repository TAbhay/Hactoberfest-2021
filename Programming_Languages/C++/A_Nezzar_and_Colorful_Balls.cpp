#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int cnt = 0;
        for(int i=0,j=0;i<n;i=j){
            while(j<n && arr[i]==arr[j]){
                j++;
            }
            //cout<<"j="<<j<<endl;
            cnt = max(cnt, j-i);
        }

        cout<<cnt<<endl;
    }
    return 0;
}