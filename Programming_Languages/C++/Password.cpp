#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<int> se;
        for(int i=0;i<s.size(); i++){
            if (s[i]>='a' && s[i]<='z'){
                se.insert(1);
            }
            else{
                if (i==0 || i == s.size()-1) continue;
                if (s[i] >= 'A' && s[i] <= 'Z'){
                    se.insert(2);
                }
                if (s[i] >= '0' && s[i] <= '9'){
                    se.insert(3);
                }
                if (s[i]=='@' || s[i] == '#' || s[i]=='%' || s[i] == '&' || s[i] == '?')
                    se.insert(4);
            }
        }

        if (se.size()==4 && s.size()>9) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}