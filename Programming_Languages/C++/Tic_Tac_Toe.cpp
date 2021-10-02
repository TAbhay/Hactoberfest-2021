#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int position(vector<vector<char>> grid, ll cx, ll cy, ll c_){
    //ll res = 0;
    //cout<<cx<<" "<<cy<<" "<<c_<<endl;
    if ((cx+cy)%2 && (cx-cy) != 1) return 3;
    bool flag = false;
    for(int i=0;i<3;i++){
        for( ll j=0;j<3;j++){
            if(arr[i][j] == arr[i+1][j] == arr[i+2][j] )
        }
    }
    //return res;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<vector<char>> grid(3, vector<char> (3,0));

        ll cx=0, cy=0, c_=0;
        for(ll i=0;i<3;i++){
            string s;
            cin>>s;
            for(ll j=0;j<3;j++){
                if (s[j] == 'X') cx++;
                else if(s[j] == 'O') cy++;
                else c_++;
                grid[i][j] = s[j];
            }
        }

        ll ans = position(grid, cx,cy, c_);
        cout<<ans<<endl;
        return 0;
    }
}