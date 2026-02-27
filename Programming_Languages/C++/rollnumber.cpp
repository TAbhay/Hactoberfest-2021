#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if (n%200){
            string str = to_string(n)+"200";
            n = stoi(str);
        }
        else{
            n = n/200;
        }
    }

    cout<<n;
}