#include<bits/stdc++.h>
using namespace std;

void bfsHelper(int src, vector<int> &vis, vector<int> &bfs, vector<int> adj[]){
        
        queue<int> q;
        //push the first node in a queue
        q.push(src);
        //mark it as visited
        vis[src] = 1;
        //continue until queue will not become empty
        while(!q.empty()){
            //take the first node from queue
            int node = q.front();
            //delete it from queue
            q.pop();
            //push it in answer
            bfs.push_back(node);
            //traverse for all its adjacent nodes
            for(auto it : adj[node]){
                //if it is not visited then push it in a queue and mark it as visited
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
    }

vector<int> findBFS(int v, vector<int> adj[]){
    //create visited array to keep track of nodes whether they are visited or not so that they can't be traversed twice
    vector<int> vis(v, 0);
    //bfs will contain the resultant bfs array
    vector<int> bfs;
    //do the operation for all the components
    for(int i=0; i<v; i++){
        if(!vis[i]){
            bfsHelper(i, vis, bfs, adj);
        }
    }
    //return answer
    return bfs;
}
int main(){
    // n = no. of vertices
    //m = no. of edges
    int n, m;
    cin>>n>>m;
    //graph has 0 based indexing
    //create adjacency list
    vector<int> adj[n];
    
    //take edges as input
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        
        //this is undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //store and print answer
    vector<int> ans = findBFS(n, adj);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
