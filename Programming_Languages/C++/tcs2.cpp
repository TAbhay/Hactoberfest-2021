#include<bits/stdc++.h>

using namespace std;

int main(){
    int p;
    cin>>p;
    int cnt = 0;
    int i=1;
    while(p>=0){
        if(p>=(i*i)){
            cnt++;
            p = p-(i*i);
        }else break;
        i++;
    }
    cout<<cnt;
    return 0;
}