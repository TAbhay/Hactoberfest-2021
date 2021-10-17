//Classic
//g++ -std=c++11 -O2 -Wall a.cpp -o test
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define For(i,a,b) for(ll i=a;i<b;i++)
#define endl "\n"
#define debug2(x,y) cout<<"AA Baju Smit----> "<<#x<<" -> "<<x<<" | "<<#y<<" -> "<<y<<endl;
#define debug(x) cout<<"AA Baju Smit------> "<<#x<<" -> "<<x<<endl
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mod 1000000007
#define ciN cin
#define tu(a,s) get<a>(s)
#define tin tuple<int,int,int>
#define ter(x,y,z) ((x)?y:z)
////////////////////////////////////////////////////////////////
const int N = 100001;
// Update values of N & n as per problem..
int n;
vi adj[N];
vector<bool>vis(N, 0);
vi topo;
void dfs(int start) {
	vis[start] = 1;
	for (auto x : adj[start]) {
		if (!vis[x])dfs(x);
	}
	topo.pb(start);
//	debug(start);
}
void topologicalSort() {
	topo.clear();
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
		}
	}
	reverse(all(topo));
}
void jabru() {
	cin >> n;
	for (int i = 0; i <= n; i++) {
		adj[i].clear(); vis[i] = 0;
	}
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		adj[a].pb(b);// adj[b].pb(a);
	}
	topologicalSort();
	for (auto x : topo)cout << x << " ";
	cout << endl;

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	t = 1;
	cin >> t;
	while (t--) {
		jabru();
	}

	return 0;




}