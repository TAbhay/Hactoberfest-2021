#include <bits/stdc++.h>
using namespace std;

//Prims algorithm
//this is also a algorithm used to find the mst of a given graph

int findMinVertex(int* weights,bool* visited,int n){
    int minVertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minVertex == -1 || weights[i]<weights[minVertex])){
            minVertex=i;
        }
    }
    return minVertex;
}

void prims(int** edges,int n){
    int* parent = new int[n];
    int* weights = new int[n];
    bool* visited = new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
        weights[i]=INT_MAX;

    }
    parent[0]=-1;
    weights[0]=0;

    for(int i=0;i<n;i++){
        //find min vertex
        int minVertex=findMinVertex(weights,visited,n);
        visited[minVertex]=true;

        //explore unvisited neighbour
        for(int j=0;j<n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                if(edges[minVertex][j]<weights[j]){
                    weights[j]=edges[minVertex][j];
                    parent[j]=minVertex;
                }
            }
        }
    }

    //printing the mst
    for(int i=1;i<n;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
        }else{
            cout<<i<<" "<<parent[i]<<" "<<weights[i]<<endl;
        }
    }

}


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    int n;
    int e;
    cin>>n>>e;
    int** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;

    }
    cout<<endl;

    prims(edges,n);

    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;

    return 0;
}

/*input
5 7 (5 vertices and 7 edges)
0 1 4
0 2 8
1 3 6
1 2 2
2 3 3
2 4 9
3 4 5

output
0 1 4
1 2 2
2 3 3
3 4 5
*/

