#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> vect;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }

    sort(vect.begin(), vect.end());

    stack<pair<int, int>> interval;
    stack<pair<int, int>> ans;

    for(int i=0;i<n;i++){
        if (i==0) interval.push(make_pair(vect[i].first, vect[i].second));
        else{
            if (vect[i].first > interval.top().second){
                interval.push(make_pair(vect[i].first, vect[i].second));
            }
            else{
                interval.top().second = max(interval.top().second, vect[i].second);
            }
        }
    }
    while(interval.empty()==false){
        ans.push(make_pair(interval.top().first, interval.top().second));
        interval.pop();
    }
    while(ans.empty() == false){
        cout<<ans.top().first<<" "<<ans.top().second<<endl;
        ans.pop();
    }
    return 0;
}