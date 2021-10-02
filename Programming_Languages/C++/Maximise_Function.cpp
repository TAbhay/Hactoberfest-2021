#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

void solve (){
    ll n;
    cin>>n;
    vi arr(n);
    forloop(i,0,n){
        cin>>arr[i];
    }

    // forloop(i,0,n){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    sort(arr.begin(), arr.end());

    ll a = arr[0];
    ll b = arr[n-2];
    ll c = arr[n-1];

   // cout<<a<<" "<<b<<" "<<c<<endl;

    cout<<((b-a) + (c-b) + (c-a))<<endl;
}

int main(){
    time_t start,finish;
    time(&start);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    time(&finish);
    cout<<"time = "<<difftime(finish, start)<<endl;
    return 0;
}