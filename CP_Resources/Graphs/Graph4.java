//Java Program-----Graphs
import java.util.*;
import java.lang.*;

class Graph4{
	
// To store the assigned Edges
static ArrayList<int[]> ans;

// Flag variable to check Bridges
static int flag = 1;

// Function to implement DFS Traversal
static int dfs(ArrayList<ArrayList<Integer>> adj,
			int[] order, int[] bridge_detect,
			boolean[] mark, int v, int l)
{
	
	// Mark the current node as visited
	mark[v] = true;
	
	// Update the order of node v
	order[v] = order[l] + 1;

	// Update the bridge_detect for node v
	bridge_detect[v] = order[v];

	// Traverse the adjacency list of
	// Node v
	for(int i = 0; i < adj.get(v).size(); i++)
	{
		int u = adj.get(v).get(i);

		// Ignores if same edge is traversed
		if (u == l)
		{
			continue;
		}

		// Ignores the edge u --> v as
		// v --> u is already processed
		if (order[v] < order[u])
		{
			continue;
		}

		// Finds a back Edges, cycle present
		if (mark[u])
		{
			
			// Update the bridge_detect[v]
			bridge_detect[v] = Math.min(order[u],
								bridge_detect[v]);
		}

		// Else DFS traversal for current
		// node in the adjacency list
		else
		{
			dfs(adj, order, bridge_detect,
				mark, u, v);
		}

		// Update the bridge_detect[v]
		bridge_detect[v] = Math.min(bridge_detect[u],
									bridge_detect[v]);

		// Store the current directed Edge
		ans.add(new int[]{v, u});
	}

	// Condition for Bridges
	if (bridge_detect[v] == order[v] && l != 0)
	{
		flag = 0;
	}
	
	// Return flag
	return flag;
}

// Function to print the direction
// of edges to make graph SCCs
static void convert(ArrayList<ArrayList<Integer>> adj,
					int n)
{
	
	// Arrays to store the visited,
	// bridge_detect and order of
	// Nodes
	int[] order = new int[n];
	int[] bridge_detect = new int[n];
	boolean mark[] = new boolean[n];
	
	// DFS Traversal from vertex 1
	int flag = dfs(adj, order,
				bridge_detect,
				mark, 1, 0);

	// If flag is zero, then Bridge
	// is present in the graph
	if (flag == 0)
	{
		System.out.print("-1");
	}

	// Else print the direction of
	// Edges assigned
	else
	{
		for(int[] it : ans)
		{
			System.out.println(it[0] + "->" +
							it[1]);
		}
	}
}

// Function to create graph
static void createGraph(int Edges[][],
						ArrayList<ArrayList<Integer>> adj,
						int M)
{
	
	// Traverse the Edges
	for(int i = 0; i < M; i++)
	{
		int u = Edges[i][0];
		int v = Edges[i][1];
		
		// Push the edges in an
		// adjacency list
		adj.get(u).add(v);
		adj.get(v).add(u);
	}
}

// Driver code
public static void main(String[] args)
{
	
	// N vertices and M Edges
	int N = 5, M = 6;
	
	int Edges[][] = { { 0, 1 }, { 0, 2 },
					{ 1, 2 }, { 1, 4 },
					{ 2, 3 }, { 3, 4 } };
	
	// To create Adjacency List
	ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
	ans = new ArrayList<>();
	
	for(int i = 0; i < N; i++)
		adj.add(new ArrayList<>());
	
	// Create an undirected graph
	createGraph(Edges, adj, M);
	
	// Function Call
	convert(adj, N);
}
}
