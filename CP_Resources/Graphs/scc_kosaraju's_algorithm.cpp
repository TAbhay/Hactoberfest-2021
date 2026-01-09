
/*
	Strongly Connected Components of a directed graph Kosaraju's Algorithm

	Step 1 : Normal dfs and note the ending time of a node and sort it desendingly..
	Step 2 : Make a graph with every edge reversed
	Step 3 : Process the sorted nodes with revered graph and store the SCC


*/
//Classic
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
#define debug(x) cout<<"AA Baju Smit------> "<<#x<<" -> "<<x<<endl
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mod 1000000007
#define ciN cin
////////////////////////////////////////////////////////////////
ll n;
vi adj[100001], Radj[100001];// Directed graph both tranposed and normal..
stack<int>order;// Order of ending of first dfs
vector<bool>vis(100001, 0);
vi scc;
void dfs(int start) {
	vis[start] = 1;
	for (auto x : adj[start]) {
		if (!vis[x]) {
			dfs(x);
		}
	}
	order.push(start);
}
void Rdfs(int start) {
	vis[start] = 1;
	scc.pb(start);
	for (auto x : Radj[start]) {
		if (!vis[x]) {
			Rdfs(x);
		}
	}

}
void jabru() {
	cin >> n;
	vi v(n); For(i, 0, n)cin >> v[i];
	int e; cin >> e;
	For(i, 0, e) {
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		Radj[y].pb(x);
	}
	// make normal and transpose graph...
	for (int i = 1; i <= n; i++) {
		if (!vis[i])dfs(i);
	}
	// step - 1&2 complete
	vector<vi>compo; // This will contain vector of every component..

	for (int i = 1; i <= n; i++)vis[i] = 0;// Clearing vis ...
	// Performing Rdfs in the order of stact...
	while (!order.empty()) {
		int curr = order.top();
		order.pop();
		if (!vis[curr]) {
			scc.clear();
			Rdfs(curr);
			if (scc.size() > 0)
				compo.pb(scc);
		}

	}
	// Now play around with the components.... :)


}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	t = 1;
//	cin >> t;
//	debug("START");
	while (t--) {
		jabru();
	}

	return 0;
}