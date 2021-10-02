#include<bits/stdc++.h>

using namespace std;

vector<int> nextgreater(vector<int> arr, int n){
    stack<int> s;
    vector<int> ans(n);
    s.push(arr[n-1]);
    ans[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        // cout<<arr[i]<<endl;

        while(s.size() > 0 && arr[i] >= s.top()){
                s.pop();
        }
        // cout<<i<<endl;
        if (s.size() == 0) { ans[i] = -1; }
        else { ans[i] = s.top(); }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

    vector<int> res = nextgreater(arr, n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}
