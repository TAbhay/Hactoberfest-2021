#include<bits/stdc++.h>

using namespace std;

#define ll long long int

bool matching(char a, char b){
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}

bool isbalanced(string str){
    stack<char> s;
    char curr;
    for(int i=0;i<str.size();i++){
        if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
            s.push(str[i]);
            //curr = s.top();
        }

        else{
            if (s.empty()) return false;
            else if (matching(s.top(), str[i]) == false) return false;
            else s.pop();
        }
    }

    return (s.empty() == true);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string par;
        cin>>par;
        if (isbalanced(par)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}