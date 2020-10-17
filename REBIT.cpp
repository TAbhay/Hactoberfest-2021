/*
Link:https://www.codechef.com/APRIL20B/problems/REBIT
SubmissionLink:https://www.codechef.com/viewsolution/31590817
*/


#include<bits/stdc++.h>
using namespace std;
/*==============================GLOBALVARIABLE============================*/
const long int M=998244353;
typedef struct value value;
struct value {
    long long zz, oo, aa, bb,tot;
    value() { zz = 1;  oo = 1;  aa = 1;  bb = 1; tot=4; }
};
/*=============================FUNCTIONS===============================*/
value DOAND(value ff,value ss){
     value res;
     res.oo=(ff.oo*ss.oo)%M;
     res.aa=((ff.oo*ss.aa)%M+((ff.aa*ss.oo)%M+(ff.aa*ss.aa)%M)%M)%M;
     res.bb=((ff.oo*ss.bb)%M+((ff.bb*ss.oo)%M+(ff.bb*ss.bb)%M)%M)%M;
     res.tot=(ff.tot*ss.tot)%M;
     res.zz=(((ff.zz*ss.zz)%M+(ff.zz*ss.oo)%M)%M+((ff.zz*ss.aa)%M+(ff.zz*ss.bb)%M)%M)%M;
     res.zz=(((res.zz)%M+(ff.oo*ss.zz)%M)%M+((ff.aa*ss.zz)%M+(ff.aa*ss.bb)%M)%M)%M;
     res.zz=(((res.zz)%M+(ff.bb*ss.zz)%M)%M+(ff.bb*ss.aa)%M)%M;
     return res;
}
value DOOR(value ff,value ss){
    value res;
    res.zz=(ff.zz*ss.zz)%M;
    res.aa=((ff.zz*ss.aa)%M+((ff.aa*ss.zz)%M+(ff.aa*ss.aa)%M)%M)%M;
    res.bb=((ff.zz*ss.bb)%M+((ff.bb*ss.zz)%M+(ff.bb*ss.bb)%M)%M)%M;
    res.tot=(ff.tot*ss.tot)%M;
    res.oo=(((ff.zz*ss.oo)%M+(ff.oo*ss.zz)%M)%M+((ff.oo*ss.oo)%M+(ff.oo*ss.aa)%M)%M)%M;
    res.oo=(((res.oo)%M+(ff.oo*ss.bb)%M)%M+((ff.aa*ss.oo)%M+(ff.aa*ss.bb)%M)%M)%M;
    res.oo=(((res.oo)%M+(ff.bb*ss.oo)%M)%M+(ff.bb*ss.aa)%M)%M;
    return res;
}
value DOXOR(value ff,value ss){
    value res;
    res.zz=(((ff.zz*ss.zz)%M+(ff.oo*ss.oo)%M)%M+((ff.aa*ss.aa)%M+(ff.bb*ss.bb)%M)%M)%M;
    res.oo=(((ff.zz*ss.oo)%M+(ff.oo*ss.zz)%M)%M+((ff.aa*ss.bb)%M+(ff.bb*ss.aa)%M)%M)%M;
    res.aa=(((ff.zz*ss.aa)%M+(ff.oo*ss.bb)%M)%M+((ff.aa*ss.zz)%M+(ff.bb*ss.oo)%M)%M)%M;
    res.bb=(((ff.zz*ss.bb)%M+(ff.oo*ss.aa)%M)%M+((ff.aa*ss.oo)%M+(ff.bb*ss.zz)%M)%M)%M;
    res.tot=(ff.tot*ss.tot)%M;
    return res;
}
long long modPow(long long x,long int n){
    if(n==0)
        return 1;
    if(n==1)
        return x%M;
    long long ans=modPow(x,n/2);
    ans=(ans*ans)%M;
    if(n&1)
        ans=(ans*x)%M;
    return ans;
}
void solve() {              //(((#&#)|(#^#))&((#|#)^(#&#)))
    string s;
    cin >> s;
    stack<value> st;
    stack<char> op;
    value tp1, tp2, ans;
    long int n = s.size();
    for (long int i = 0; i < n; i++) {
        if (s[i] == '&' || s[i] == '|' || s[i] == '^')
            op.push(s[i]);
        else if (s[i] == '#') {
            value nw;
            st.push(nw);
        } else if (s[i] == ')') {
            char sign = op.top();
            op.pop();
            tp1 = st.top();
            st.pop();
            tp2 = st.top();
            st.pop();
            if (sign == '&') ans = DOAND(tp2, tp1);
            else if (sign == '|') ans = DOOR(tp2, tp1);
            else if (sign == '^') ans = DOXOR(tp2, tp1);
            st.push(ans);
        }
    }
    //cout<<ans.zz<<" "<<ans.oo<<" "<<ans.aa<<" "<<ans.bb<<" "<<ans.tot<<endl;
    ans = st.top();
    long long res = modPow(ans.tot, M - 2);
    cout << (ans.zz * res) % M << " " << (ans.oo * res) % M << " " << (ans.aa * res) % M << " " << (ans.bb * res) % M
         << endl;

}
/*================================MAIN=============================*/
int main() {
        long int t;
        cin>>t;
        while(t--)
           solve();
    return 0;
}
