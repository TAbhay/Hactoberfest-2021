#include<bits/stdc++.h>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> arr;
    int tmp;
    while (iss >> tmp) {
        arr.push_back(tmp);
        iss.ignore(1, ' ');
    }
    int len = arr.size();
    vector<int> ans(len);
    ans[0] = arr[0]*arr[1];
    for(int i=1;i<len-1;i++){
        ans[i] = arr[i-1]*arr[i+1];
    }
    ans[len-1] = arr[len-1]*arr[len-2];
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}