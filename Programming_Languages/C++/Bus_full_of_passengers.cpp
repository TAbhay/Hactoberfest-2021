#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        unordered_set<int> st;
        bool flag = true;
        vector<pair<char,int>> arr;
        for(int i=0;i<q;i++){
            char ch;
            int x;
            cin>>ch>>x;
            arr.push_back(make_pair(ch,x));
        }
        for(int i=0;i<arr.size();i++){
            char ch = arr[i].first;
            int x = arr[i].second;
            if (ch=='+'){
                st.insert(x);
                //cout<<st.size()<<" ";
                if (st.size()>m){
                    flag = false;
                    break;
                }
            }else{
                if (st.find(x) != st.end()) st.erase(x);
                else{
                    flag = false;
                    break;
                }
            }
        }
        //cout<<flag<<endl;
        if (flag) cout<<"Consistent"<<endl;
        else cout<<"Inconsistent"<<endl;
    }
    return 0;
}