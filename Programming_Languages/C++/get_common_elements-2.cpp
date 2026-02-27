#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    unordered_map<int, int> m;
    for(int i=0;i<n1;i++){
        m[arr1[i]]++;
    }

    for(int i=0;i<n2;i++){
        //cout<<"count="<<m.count(arr2[i])<<endl;
        if (m[arr2[i]]>0){
            cout<<arr2[i]<<endl;
            m[arr2[i]]--;
        }
        
    }
    return 0;
}