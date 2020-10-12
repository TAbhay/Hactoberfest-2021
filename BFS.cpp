#include <bits/stdc++.h>

using namespace std;

// Assuming start_node will be zero indexed
vector<int> bfs(vector<vector<int>> &input, int n, int start_node)
{
    bool visited[n];
    vector<int> ret;
    queue<int> qe;
    qe.push(start_node);
    ret.push_back(start_node);
    while (!qe.empty())
    {
        int current = qe.front();
        qe.pop();

        if (!visited[current])
        {
            visited[current] = true;
            for (int c : input[current])
            {
                ret.push_back(current);
                qe.push(c);
            }
        }
    }
    return ret;
}

int main()
{

    int n, m; // n is the no of nodes and m is no of edges
    cin >> n >> m;

    vector<vector<int>> input(n);
    for (int i = 0; i < m; ++i)
    {

        int a, b;
        cin >> a >> b;
        input[a - 1].push_back(b - 1);
        input[b - 1].push_back(a - 1);
    }
}