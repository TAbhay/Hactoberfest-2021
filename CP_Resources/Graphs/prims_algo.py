def prims():
    global vertices,graph,min_weight
    visited=[False]*vertices
    visited[0]=True
    num_edges=0
    while(num_edges<vertices-1):
        min=99999
        x=0
        y=0
        for i in range(vertices):
            if visited[i]:
                for j in range(vertices):
                    if( (not visited[j]) and graph[i][j]):
                        if min>graph[i][j]:
                            min=graph[i][j]
                            x=i
                            y=j

        print(x,"--",y,"-->",graph[x][y])
        min_weight+=graph[x][y]
        visited[y]=True
        num_edges+=1
    
min_weight=0

vertices=int(input('Number of vertices : '))
graph=[list(map(int,input().split())) for i in range(vertices)]
print ("Edges and their weights")
prims()
print('\nMinimum weight : ',min_weight)
