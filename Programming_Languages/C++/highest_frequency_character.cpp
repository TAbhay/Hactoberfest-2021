#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char, int> m;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        m[str[i]]++;
    }

    char mx;
    int hf = 0;
    for(auto x: m){
        if(x.second > hf){
            mx = x.first;
            hf = x.second;
        }
    }

    cout<<mx;
}