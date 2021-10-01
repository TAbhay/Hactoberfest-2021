#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int parent;
    int rank;
};

struct Edge
{
    int src;
    int dst;
    int wt;
};

vector<node> dsuf;
vector<Edge> mst;

// FIND operation
int find(int v)
{
    if (dsuf[v].parent == -1)
    {
        return v;
    }
    return dsuf[v].parent = find(dsuf[v].parent); // PATH Compression
}

void union_op(int fromP, int toP)
{
    //fromP = find(fromP);
    //toP = find(toP);

    //UNION by RANK
    if (dsuf[fromP].rank > dsuf[toP].rank) //fromP has higher rank
        dsuf[toP].parent = fromP;
    else if (dsuf[fromP].rank < dsuf[toP].rank) //toP has higher rank
        dsuf[fromP].parent = toP;
    else
    {
        //Both have same rank and so anyone can be made as parent
        dsuf[fromP].parent = toP;
        dsuf[toP].rank += 1; //Increase rank of parent
    }
}

bool comparator(Edge a, Edge b)
{
    return (a.wt < b.wt);
}

void Kruskals(vector<Edge> &edge_list, int V, int E)
{
    sort(edge_list.begin(), edge_list.end(), comparator);

    int i = 0, j = 0;
    while (i < V - 1 && j < E)
    {
        int fromP = find(edge_list[j].src); // FIND absolute parent of subset
        int toP = find(edge_list[j].dst);

        if (fromP == toP) // If the absolute parent is same then look for the next edges and continue;
        {
            ++j;
            continue;
        }

        // UNION operation
        union_op(fromP, toP); // UNION of 2 set
        mst.push_back(edge_list[j]);
        ++i;
    }
}

// Display the formed MST
void printMST(vector<Edge> &mst)
{
    cout << "MST formed is\n";
    for (auto p : mst)
    {
        cout << "src: " << p.src << " dst: " << p.dst << " wt: " << p.wt << "\n";
    }
}

int main()
{
    int E; //No of edges
    int V; //No of vertices (0 to V-1)
    cin >> V >> E;

    dsuf.resize(V);             // Mark all vertices as seperate subsets with only 1 element
    for (int i = 0; i < V; ++i) // Mark all nodes as independent set
    {
        dsuf[i].parent = -1;
        dsuf[i].rank = 0;
    }

    vector<Edge> edge_list; // Adjancency list
    Edge temp;
    for (int i = 0; i < E; ++i)
    {
        int from, to, wt;
        cin >> from >> to >> wt;

        temp.src = from;
        temp.dst = to;
        temp.wt = wt;

        edge_list.push_back(temp);
    }

    Kruskals(edge_list, V, E);
    printMST(mst);

    return 0;
}

//TIME COMPLEXITY: O(ElogE + ElogV)
//ElogE for sorting E edges in edge_list
//ElogV for applying FIND & UNION operations on E edges having V vertices