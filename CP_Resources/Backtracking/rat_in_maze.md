```c
/*Given a maze, NxN matrix. A rat has to find a path from source to destination. maze[0][0] (left top corner) is the source
and maze[N-1][N-1](right bottom corner) is the destination. There are few cells which are blocked, i.e. rat cannot enter into
those cells. Rat can move in any direction ( left, right, up and down).*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this function will check if mouse can move to this particular cell or not
bool issafe(int** maze, int x, int y, int n){
    // check if x and y are in limits and cell is not blocked
    if (x<n && y<n & maze[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int** maze, int x, int y, int n, int** solArr){
    //base condition
    if (x==n-1 && y==n-1)
    {
        solArr[x][y] = 1;
        return true;
    }

    // check if maze[x][y] is feasible to move
    if (issafe(maze,x,y,n))
    {
        // move to maze[x][y]
        solArr[x][y] = 1;
        // now mouse has two options, either go right OR go down
        if (ratInMaze(maze,x+1,y,n,solArr))
        {
            return true;
        }
        if (ratInMaze(maze,x,y+1,n,solArr))
        {
            return true;
        }
        //if none of the options work out BACKTRACK undo the move
        solArr[x][y] = 0;       //backtracking
        return false;
    }
    return false;
}
int main(){

    int n;
    cin>>n;

    int** maze= new int*[n];
    for (int i = 0; i < n; i++)
    {
        maze[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>maze[i][j];
        }   
    }
    cout<<endl;
    
    //initialize the solution matrix with value 0
    int** solArr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }     
    }

    //Calling ratInMaze function
    if (ratInMaze(maze,0,0,n,solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }   
            cout<<endl;
        }   
    }
     
    return 0;
}
```
