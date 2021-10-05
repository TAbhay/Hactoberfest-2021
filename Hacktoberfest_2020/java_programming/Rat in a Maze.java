
//Given a maze, NxN matrix. A rat has to find a path from source to destination. maze[0][0] (left top corner)is the source and maze[N-1][N-1](right bottom corner) is destination. There are few cells which are blocked, means rat cannot enter into those cells. Rat can move in any direction ( left, right, up and down).

public class RatInMaze {

 public int[][] solution;

 //initialize the solution matrix in constructor.
 public RatInMaze(int N) {
 solution = new int[N][N];
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < N; j++) {
 solution[i][j] = 0;
 }
 }
 }

 public void solveMaze(int[][] maze, int N) {
 if (findPath(maze, 0, 0, N, "down")) {
 print(solution, N);
 }else{
 System.out.println("NO PATH FOUND");
 }

 }

 public boolean findPath(int[][] maze, int x, int y, int N, String direction) {
 // check if maze[x][y] is feasible to move
 if(x==N–1 && y==N–1){//we have reached
 solution[x][y] = 1;
 return true;
 }
 if (isSafeToGo(maze, x, y, N)) {
 // move to maze[x][y]
 solution[x][y] = 1; 
 // now rat has four options, either go right OR go down or left or go up
 if(direction!="up" && findPath(maze, x+1, y, N, "down")){ //go down
 return true;
 }
 if(direction!="left" && findPath(maze, x, y+1, N,"right")){ //go right
 return true;
 }
 if(direction!="down" && findPath(maze, x–1, y, N, "up")){ //go up
 return true;
 }
 if(direction!="right" && findPath(maze, x, y–1, N, "left")){ //go left
 return true;
 }
 //if none of the options work out BACKTRACK undo the move
 solution[x][y] = 0;
 return false;
 }
 return false;
 }

 // this function will check if mouse can move to this cell
 public boolean isSafeToGo(int[][] maze, int x, int y, int N) {
 // check if x and y are in limits and cell is not blocked
 if (x >= 0 && y >= 0 && x < N && y < N && maze[x][y] != 0) {
 return true;
 }
 return false;
 }
 public void print(int [][] solution, int N){
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < N; j++) {
 System.out.print(" " + solution[i][j]);
 }
 System.out.println();
 }
 }
 public static void main(String[] args) {
 int N = 5;
 int[][] maze = { { 1, 0, 1, 1,1 }, { 1, 1, 1, 0,1 }, { 0, 0,0, 1, 1 },
 { 0, 0, 0, 1,0 },{ 0, 0,0, 1, 1 } };
 RatInMaze r = new RatInMaze(N);
 r.solveMaze(maze, N);
 }

} 