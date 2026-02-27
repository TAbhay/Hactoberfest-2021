#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int f,w,fpd,wpd,d;
        cin>>f>>w>>fpd>>wpd>>d;
        if (min(f/fpd, w/wpd) < d) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}