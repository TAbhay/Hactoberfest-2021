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
#define X INT_MAX
#define N INT_MIN
////////////////////////////////////////////////////////////////
vi adj[100001];
vector<bool>vis(100001, 0);
bool dfs(int node, int par) {
	vis[node] = 1;
	for (auto x : adj[node]) {
		if (vis[x] == 0) {
			if (dfs(x, node) == true)
				return true;
		}
		else {
			if (x != par)
				return true;
		}
	}
	return false;
}
void jabru() {
	int n; cin >> n;
	int e; cin >> e;
	for (int i = 0; i < e; i++) {
		int x, y; cin >> x >> y;
		adj[x].pb(y); adj[y].pb(x);
	}
	bool isCycly = dfs(1, -1);
	cout << isCycly << endl;

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	t = 1;
//	cin >> t;
	while (t--) {
		jabru();
	}


	return 0;
}