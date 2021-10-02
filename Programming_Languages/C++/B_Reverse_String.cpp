#include<bits/stdc++.h>

using namespace std;

#define ll long long int

bool isreversestring(string str, string ch){
    unordered_map<char, int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]] = i;
    }   
     bool flag = true;
    for(int i=0;i<ch.size()-1;i++){
        if(mp[ch[i]]+1 == mp[ch[i+1]] || mp[ch[i]] == mp[ch[i+1]+1]) continue;
        else flag = false;
    }
    return flag;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string str,ch;
        cin>>str;
        cin>>ch;
        if (isreversestring(str,ch)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}