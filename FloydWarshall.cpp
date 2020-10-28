#include<bits/stdc++.h>
using namespace std;

// Treat outer loop as the intermediate vertex. Do not change this.
void floydWarshall(vector<vector<int>> g, vector<vector<int>>& dist, int n){
  for(int j = 0; j < n ; j ++){
    for(int i = 0; i < n ; i ++){
      for(int k = 0; k < n ; k ++){
        if((dist[i][j]+dist[j][k])<dist[i][k]){
          dist[i][k] = dist[i][j] + dist[j][k];
        }
      }
    }
  }
}

// wt[i][j] = 0 if i == j
// wt[i][j] = INF if (i, j) does not belong to edgeList
int main(){
  int n; cin >> n;
  vector<vector<int>> g(n, vector<int>(n, 0));
  for(int i = 0; i < n; i ++) {
	 for(int j = 0; j < n; j ++) {
		cin >> g[i][j];
	 }
  }
  vector<vector<int>> dist(n, vector<int>(n, 0));
  floydWarshall(g, dist, n);  
  return 0;
}

