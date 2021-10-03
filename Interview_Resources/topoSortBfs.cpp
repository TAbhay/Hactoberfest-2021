//Kahns Algorithm
#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int n, vector<int> adj[])
{
    queue<int> q;
    vector<int> topo;
    vector<int> Indegree(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            Indegree[it]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int top = q.front();
        topo.push_back(top);
        q.pop();
        for (auto it : adj[top])
        {
            Indegree[it]--;
            if (Indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
    return topo;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> res = topoSort(n, adj);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}
