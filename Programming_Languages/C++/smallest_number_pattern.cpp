#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;

    stack<int> st;
    int num = 1;
    for(int i=0;i<str.size();i++){
        if (str[i] == 'd'){
            st.push(num);
            num++;
        }else{
            st.push(num);
            num++;

            while(st.empty()==false){
                cout<<st.top();
                st.pop();
            }
        }
    }

    st.push(num);
    while(st.empty()==false){
        cout<<st.top();
        st.pop();
    }

    return 0;
}