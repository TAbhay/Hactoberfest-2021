#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> arr, int n){
    unordered_set<int> st;
    vector<int> ans;
    for(int i=0;i<n;i++){
        st.insert(arr[i]/2);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if (st.find(arr[i]) != st.end()){
            cnt++;
            ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    if (cnt >= n/2) cout<<"YES";
    else cout<<"NO";
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr, n);
    return 0;
}