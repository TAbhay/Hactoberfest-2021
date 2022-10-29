#include <bits/stdc++.h>
using namespace std;

//dijkstra algoriths - this algorithm is used to find the shortest distance between
//two nodes of a graph

int findMinVertex(int* distance,bool* visited,int n){
    int minVertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minVertex == -1 || distance[i]<distance[minVertex])){
            minVertex=i;
        }
    }
    return minVertex;
}

void dijkstra(int** edges,int n){
    int* distance = new int[n];
    bool* visited = new bool[n];

    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
        visited[i]=false;
    }
    distance[0]=0;

    for(int i=0;i<n-1;i++){
        int minVertex = findMinVertex(distance,visited,n);
        visited[minVertex]=true;
        for(int j = 0;j<n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                int dist = distance[minVertex]+edges[minVertex][j];
                if(dist<distance[j]){
                    distance[j]=dist;
                }
            }
        }
    }

    //printing the result
    cout<<"Result Printing"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
    delete[] visited;
    delete[] distance;
}


int main() {
    // Write C++ code here
    cout<<"---------DIJKSTRA ALGORITHM---------"<<endl;
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

    dijkstra(edges,n);

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
1 3 5
1 2 2
2 3 5
2 4 9
3 4 4

output
0 0     0-0 tk ka cost 0
1 4     0 se 1 tk reach krne ka cost 4
2 6     0 se 2 tk reach krne ka cost 6
3 9     0 se 3 tk reach krne ka cost 9
4 13    0 se 4 tk reach krne ka cost 14
*/

