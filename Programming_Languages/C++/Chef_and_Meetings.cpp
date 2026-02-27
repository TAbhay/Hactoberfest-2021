#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

int converttime(string ti){
    ll time;
    string s = "";
    if (ti[6]=='P'){
        if (ti[0] == '1' && ti[1] == '2'){
            s+='1';
            s+='2';
            s+=ti[3];
            s+=ti[4];
            time = stoi(s);
        }
        else{
            s+=ti[0];
            s+=ti[1];
            s+=ti[3];
            s+=ti[4];
            time = stoi(s) + 1200;
        }
    }
    else{
        if (ti[0] == '1' && ti[1] == '2'){
            s+='0';
            s+='0';
            s+=ti[3];
            s+=ti[4];
            time = stoi(s);
        }
        else{
            s+=ti[0];
            s+=ti[1];
            s+=ti[3];
            s+=ti[4];
            time = stoi(s);
        }
    }
    return time;
}
void solve (){
    string ti;
    getline(cin >> ws, ti);
    int meettime = converttime(ti);   
    //cout<<meettime;
    ll n;
    cin>>n;
    string ans = "";
    while(n--){
        string str;
        getline(cin >> ws, str);
        string l = str.substr(0,8);
        string r = str.substr(9,8);
        ll lb = converttime(l);
        ll ub = converttime(r);
        if (lb <= meettime && meettime <= ub) ans+='1';
        else ans+='0';
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}