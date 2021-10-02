#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int u, v, wt;
        
        node(int first, int second, int weight){
            u = first;
            v = second;
            wt = weight;
        }
};

bool comp(node a, node b){
    return a.wt<b.wt;
}

int findPar(int u, vector<int> &parent){
    if(parent[u] == u) return u;
    return parent[u] = findPar(parent[u], parent);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank){
    u = findPar(u, parent);
    v = findPar(v, parent);
    
    if(rank[u]>rank[v]){
        parent[v] = u;
    }
    else if(rank[u]<rank[v]){
        parent[u] = v;
    }
    else if(rank[u] == rank[v]){
        parent[u] = v;
        rank[v]++;
    }
}

int main(){
    //no of vertices and no of edges
    int n, m;
    cin>>n>>m;
    
    //instead of creating an adjacency list, we will create a linear data structure of edges
    //type of each edge will be node, i.e will contain starting point, ending pt and weight
    vector<node> edges;
    for(int i=0; i<m; i++){
        //push the data into edges
        int u, v, wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u, v, wt));
    }
    
    //sort the edges in ascending order on the basis of weight
    sort(edges.begin(), edges.end(), comp);
    
    //initialise parent of each node to be the node itself
    vector<int> parent(n+1);
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
    //initialise the rank of each node to be zero
    vector<int> rank(n+1, 0);
    
    
    int cost=0;
    //create a mst
    vector<pair<int, int>> mst;
    for(auto it : edges){
        //add the edge if it is not creating cycle
        /*i.e if both the starting point and ending point are not in the same component
        therefore not creating cycle, therefore find parent of both node */
        if(findPar(it.v, parent) != findPar(it.u, parent)){
            //if not creating cycle then push it in mst and add cost 
            cost += it.wt;
            mst.push_back({it.u, it.v});
            //now add this edge in main component
            unionn(it.u, it.v, parent, rank);
        }
    }
    
    //print price and mst
    cout<<"Cost - "<< cost<<endl;
    for(auto it:mst){
        cout<<it.first<<" - "<<it.second<<endl;
    }
    return 0;
}

