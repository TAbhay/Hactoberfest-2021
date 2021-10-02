#include<bits/stdc++.h>

using namespace std;

bool issum(vector<int> &arr, int n, int sum){
    unordered_set<int> s; // 5, 
    int pre_sum = 0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if (s.find(pre_sum - sum) != s.end()) return true;
        if (pre_sum == sum) return true;
        s.insert(pre_sum);
    }
    return false;
}

int main(){
    int n = 4;
    vector<int> arr {3,2,5,6};  // 5,13,19,32,35,34
    int sum = 10;
    if (issum(arr, n , sum)) cout<<"YES";
    else cout<<"NO";
    return 0;
}