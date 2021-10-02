#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s = to_string(n);
    if(k>s.size()) cout<<-1;
    else cout<<s[k-1]-'0';
    return 0;
}