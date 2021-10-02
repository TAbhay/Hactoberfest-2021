#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    for(int i=0;i<s.size();i++){
        int dig = s[i]-'0';
        if(dig%2==0) s[i] = (++dig)+'0';
        else s[i]=(--dig)+'0'; 
    }
    cout<<s;
    return 0;

}