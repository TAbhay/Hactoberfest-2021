#include<bits/stdc++.h>
using namespace std;
// if power odd then res*base power--
// else power/=2 base*=base
int main(){
    int power,res=1,base;cin>>base>>power; 
    while(1){
        if(power%2==0){
            power/=2;
            base*=base;
        }
        else{
            power--;
            res*=base;
        }
        if(power==0)
            break;
    }
    cout<<res;
}