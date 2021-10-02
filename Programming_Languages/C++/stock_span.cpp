#include<bits/stdc++.h>

using namespace std;

vector<int> stockspan(vector<int> &arr, int n){
    stack<int> s;
    vector<int> res(n);
    s.push(0);
    res[0] = 1;
    
    for(int i=1;i<n;i++){
        while(arr[i] >= arr[s.top()] && s.empty()==false){
            s.pop();
        }
        
        if (s.empty()) res[i] = i+1;
        else{
            res[i] = i - s.top();
        }
        
        s.push(i);
    }
    
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> ans = stockspan(arr, n);
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}