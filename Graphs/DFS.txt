#include <iostream>
using namespace std;


Depth_first_Search(int u,int B[8][8],int n)
{
int i ;
static int visited[8]={0};
 if(visited[u]==0)
{   cout<<u<<" ";
    visited[u]=1;
for(i=1;i<n;i++)
{
if(B[u][i]==1 && visited[i]==0)
Depth_first_Search(i,B,n);
}
}
}
int main()
{
    int B[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
    cout << "DFS Vertex: " << 4 << " -> " ;
    Depth_first_Search(4,B,8);

    return 0;
}
