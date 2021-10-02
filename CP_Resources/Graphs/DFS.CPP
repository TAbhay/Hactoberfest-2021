#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> &storeDFS, vector<int> adj[]){
    storeDFS.push_back(node);
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, vis, storeDFS, adj);
        }
    }
}

vector<int> findDFS(int v, vector<int> adj[]){
    vector<int> vis(v, 0);
    vector<int> storeDFS;
    
    for(int i=0; i<v; i++){
        if(!vis[i]){
            dfs(i, vis, storeDFS, adj);
        }
    }
    return storeDFS;
}

int main(){
    int n, m;
    cin>>n>>m;
    
    vector<int> adj[n];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans = findDFS(n, adj);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
