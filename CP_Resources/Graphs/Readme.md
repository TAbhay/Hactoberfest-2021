# GRAPHS 
A Graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph can be defined as,

          A Graph consists of a finite set of vertices(or nodes) and set of Edges which connect a pair of nodes.

## Directed and Undirected Graph
A graph can be directed or undirected. However, in an undirected graph, edges are not associated with the directions with them.
In a directed graph, edges form an ordered pair. Edges represent a specific path from some vertex A to another vertex B. Node A is called initial node while node B is called terminal node.

## Graph Terminology

### ---> Path

A path can be defined as the sequence of nodes that are followed in order to reach some terminal node V from the initial node U.

### ---> Closed Path

A path will be called as closed path if the initial node is same as terminal node. A path will be closed path if V0=VN.

### ---> Simple Path

If all the nodes of the graph are distinct with an exception V0=VN, then such path P is called as closed simple path.

### ---> Cycle

A cycle can be defined as the path which has no repeated edges or vertices except the first and last vertices.

### ---> Connected Graph

A connected graph is the one in which some path exists between every two vertices (u, v) in V. There are no isolated nodes in connected graph.

### ---> Complete Graph

A complete graph is the one in which every node is connected with all other nodes. A complete graph contain n(n-1)/2 edges where n is the number of nodes in the graph.

### ---> Weighted Graph

In a weighted graph, each edge is assigned with some data such as length or weight. The weight of an edge e can be given as w(e) which must be a positive (+) value indicating the cost of traversing the edge.

### ---> Digraph

A digraph is a directed graph in which each edge of the graph is associated with some direction and the traversing can be done only in the specified direction.

### ---> Loop

An edge that is associated with the similar end points can be called as Loop.

### ---> Adjacent Nodes

If two nodes u and v are connected via an edge e, then the nodes u and v are called as neighbours or adjacent nodes.

### ---> Degree of the Node

A degree of a node is the number of edges that are connected with that node. A node with degree 0 is called as isolated node.
