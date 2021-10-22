#include "bits/stdc++.h"
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }
    int k ;
    cin>>k ;
    vector<pair<int,int>> v ;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i],i+1}) ;
    }
    sort(v.begin() , v.end()) ;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl ;
    // }
    
    int ms =0 ;
    for (int i = 0; i < n; i++)
    {
        if(k>v[i].first*v[i].second)
        {
            ms=ms+v[i].second ;
            k=k-v[i].first*v[i].second ;
        }else
        {
            ms=ms+k/v[i].first ;
            k = k - (v[i].first)*(k/v[i].first) ;
        }
        if(k<=0)break ;
    }
    cout<<ms<<endl ;
}