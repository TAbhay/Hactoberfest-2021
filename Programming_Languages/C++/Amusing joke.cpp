#include<bits/stdc++.h>

using namespace std;

int main()
{
    string guest;
    string host;
    string jumbled;
    cin>>guest>>host>>jumbled;
    string s;
    s = guest + host;
    sort(s.begin(), s.end());
    sort(jumbled.begin(), jumbled.end());

    if (s==jumbled) cout<<"YES";
    else cout<<"NO";
    return 0;
}
