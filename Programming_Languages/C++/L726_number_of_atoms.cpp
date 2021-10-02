#include<bits/stdc++.h>

using namespace std;

string countOfAtoms(string formula) {
    string s = formula;
    stack<pair<string, int>> st;
    map<string, int> m;
    string res = "";
    int i=0;
    while(i<s.size()){
        if(s[i] == '('){
            string y = "(";
            st.push({y,0});
            i++;
        }else if(s[i]==')'){
            string y = ")";
            st.push({y,0});
            i++;
        }else if(s[i]>='A' && s[i]<='Z'){
            string y = "";
            y=y+s[i];
            i++;
            while(s[i]>='a' && s[i]<='z'){
                y+=s[i];
                i++;
            }
            int x = 0;
            while(s[i]>='0' && s[i]<='9'){
                x=10*x+(s[i]='0');
                i++;
            }
            if (x==0) x=1;
            st.push({y,x});
        }else{
            int x = 0;
            while(s[i]>='0' && s[i]<='9'){
                x=10*x+(s[i]-'0');
                i++;
            }
            if(st.top().first==")"){
                st.pop();
                stack<pair<string, int>> stk;
                while(st.top().first!="("){
                    pair<string, int> p = st.top();
                    p.second*=x;
                    stk.push(p);
                }
                st.pop();
                while(!stk.empty()){
                    st.push(stk.top());
                    stk.pop();
                }
            }
        }
    }
    while(!st.empty()){
        if(st.top().first!="(" && st.top().first!=")"){
            m[st.top().first]+=st.top().second;
        }
        st.pop();
    }
    for(auto i : m){
        res+=i.first;
        if(i.second!=1){
            res+=to_string(i.second);
        }
    }
    
    return res;
}

int main(){
    string s = "H20";
    cout<<countOfAtoms(s);
    return 0;
}