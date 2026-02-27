#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> stones(n);
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }

    int maxpos = max_element(stones.begin(),stones.end()) - stones.begin();
    int minpos = min_element(stones.begin(),stones.end()) - stones.begin();

    cout<<minpos<<" "<<maxpos<<endl;
    
    cout<<min(min((minpos+1)+(n-maxpos), (maxpos+1)+(n-minpos)), min(minpos+1 + maxpos, n-maxpos-minpos));
    cout<<endl;
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}