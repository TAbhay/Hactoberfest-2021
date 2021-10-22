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

    priority_queue<int,vector<int> , greater<int>> pq ;
    for (int  i = 0; i < n; i++)
    {
        pq.push(a[i]) ;
    }
    int s =0 ;
    while(pq.size()>=2)
    {
        int t = pq.top() ;
        pq.pop() ;
        int y = pq.top() ;
        pq.pop() ;
        s=s+t+y ;
        pq.push(t+y) ;
    }
    cout<<s<<endl ;
    
}