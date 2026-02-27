#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    //cout<<s<<endl;
    int k;
    cin>>k;
    //cout<<k<<endl;
    int mx = INT_MIN;
    int arr[27] = {0};
    for(int i=1;i<=26;i++){
        cin>>arr[i];
        mx = (arr[i]>mx)?arr[i]:mx;
    }

    /* for(int i=0;i<27;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; */

    int len = s.size();
    //cout<<s<<k<<mx<<len;
    int ans = 0;
    for(int i=1;i<=len;i++){
        ans += i*arr[i];
    }

    for(int i=1;i<=k;i++){
        ans += (i+len) * mx;
    }

    cout<<ans;
    return 0;

}