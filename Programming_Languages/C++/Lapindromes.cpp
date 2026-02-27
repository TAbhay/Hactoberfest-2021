#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> left(26);
        vector<int> right(26);
        bool flag = true;
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            left[s[i] - 'a']++;
            right[s[j] - 'a']++;
        }

        for(int i=0;i<26;i++){
            if (left[i] != right[i]){
                flag = false;
                break;
            }
        }

        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}