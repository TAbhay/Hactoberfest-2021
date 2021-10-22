#include "bits/stdc++.h"
using namespace std ;

bool compare(pair<int,int> p1 , pair<int,int> p2)
{
    double v1 = (double) p1.first/p1.second ;
    double v2 = (double) p2.first/p2.second ;
    return v1 > v2 ;
}

int main()
{
    int n ;
    cin>>n ;
    vector<pair<int,int>> v ;
    for (int i = 0; i < n; i++)
    {
        int val,w ;
        cin>>val>>w ;
        v.push_back({val,w}) ;
    }
    int w ;
    cin>>w ;
    sort(v.begin(),v.end(),compare) ;
    double ans ;
    for (int i = 0; i < n; i++)
    {
        if(w>=v[i].second)
        {
            ans+=v[i].first ;
            w-=v[i].second ;
            continue ;
        }
        double vw = (double) v[i].first/v[i].second ;
        ans+=vw * w ;
        break ;
    }
    cout<<ans<<endl;
}