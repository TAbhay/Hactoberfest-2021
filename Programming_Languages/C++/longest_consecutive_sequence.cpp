#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int, bool> m;

    for(int i=0;i<n;i++){
        m[arr[i]] = true;
    }

    for(int i=0;i<n;i++){
        if (m.count(arr[i]-1)){
            m[arr[i]] = false;
        }
    }

    int msp = 0;
    int ml = 0;
    cout<<endl<<endl;

    for(auto x : m){
       if (x.second == true){
           int tl = 1;
           int tsp = x.first;

           while(m.count(tsp+tl)) tl++;

           if (tl > ml){
               msp = tsp;
               ml = tl;

               cout<<"msp="<<msp<<" "<<"ml="<<ml<<endl;
           }
       }
    }

    cout<<endl<<endl;

    for(int i=0;i<ml;i++){
        cout<<msp+i<<endl;
    }
    return 0;
}