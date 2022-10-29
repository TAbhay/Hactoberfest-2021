/* a graph is a set of vertices and edges
a tree is special type of graph
*/

#include<iostream>
#include<queue>
using namespace std;

//print function->this is DFS(depth first approach)
//input me edges matrx, n->dimension of matrix, sv->starting vertex, visites->visited array
void printDFS(int** edges, int n,int sv,bool* visited){
    //sbse pehle starting index print kr denge
    cout<<sv<<endl;
    //and us vertex to true kr denge
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited);
        }
    }
}

//print function->this is BFS(breath first approach)
printBFS(int** edges, int n, int sv){
    //in this we will use queue
    queue<int> pendingVertices;
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    pendingVertices.push(sv);

    while(!pendingVertices.empty()){
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout<<currentVertex<<endl;
        for(int i=0;i<n;i++){
            if(i==currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
    }
    delete[] visited;

}

void BFS(){

}

void DFS(int** edges,int n){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]);
        printDFS(edges,n,i,visited);
    }
    delete[] visited;
}


int main()
{
    cout<<"Graphs"<<endl;
    //graph is set of  vertices and edges  n->vertices and e->edges
    int n,e;
    cin>>n>>e;
    //inko store karne ke liye 2d array banayenge dynamically means ek dynamic array hoga
    //and uska harek element me dynamic array hai
    int** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            //initiating all elements with zero in starting
            edges[i][j]=0;

        }
    }
    //abhi tk hmare graph me koi edge nhi hai kuki matrix me sare elements 0 hain
    //now hum user se edges input lenge
    for(int i=0;i<e;i++){
        //user se no. of edges input lenge and utna baar loop chala lenge
        //then do edge input lenge
        int f,s;
        cin>>f>>s;
        //now f and s ke jagah 1 kr denge and
        edges[f][s]=1;
        edges[s][f]=1;

    }

    //printing se pehle hm ek array  banyengi jisme visited elements ko store krenge
    //taki bar bar same elements print na ho
    bool* visited= new bool[n];
    //start me harek elements ko false kar denge
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    //printing by DFS
    cout<<"DFS"<<endl;
    printDFS(edges,n,0,visited);

    //printing by BFS
    cout<<"BFS"<<endl;
    printBFS(edges,n,0);

    //printing by DFS for disconnected graph
    cout<<"DFS for disconnected graph"<<endl;
    DFS(edges,n);

    //printing by BFS for disconnected graph
    //cout<<"BFS for disconnected graph"<<endl;
    //BFS(edges,n);
    //same type se hi work krega visited array na bana kr ke directly pass krenge
    //can watch the video for more clarification
    //graph-1 me is part ke part se 5-6 small level graph questions discussed hain
    //unka code bhi khud se likhna




    return 0;
}

/*input
8
9
0 4
0 5
4 3
3 2
2 1
1 3
5 6
3 6
6 7
*/
