//C++ implentation for Dijkstra's Algorithm
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int node_cnt,edge_cnt,a,b,w;
    ll INF=pow(10,9);
    cout<<"Enter the count of node and edges"<<endl;
    cin>>node_cnt>>edge_cnt;
    //adajancy vector for storing the connected nodes
    vector<pair<int,int>>adj[node_cnt+1];
	 cout<<"Enter the connected node and the weight"<<endl;
    while(edge_cnt--)
    {
       
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   
    vector<int>dist(node_cnt+1,INF);
    dist[1]=0;
    pq.push({0,1});

    
    while(!pq.empty())
    {
        int curr=pq.top().second;
        int curr_d=pq.top().first;
        pq.pop();
        for(pair<int,int>edge:adj[curr])
        {
            if(curr_d+edge.second<dist[edge.first])
            {
                dist[edge.first]=curr_d+edge.second;
                pq.push({dist[edge.first],edge.first});
            }
        }
    }
    for(int i=1;i<=node_cnt;i++)
    {
        cout<<"node "<<i<<" is at distance "<<dist[i]<<" from source node"<<endl;;
    }
}