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
vi adj[1001];
vi euler;
vector<bool>vis(1001, false);
vi height(1001);
vi first(1001);
void dfs(int start, int h) {
	vis[start] = 1;
	height[start] = h;
	first[start] = euler.size();
	euler.pb(start);
	for (auto x : adj[start]) {
		if (!vis[x]) {
			dfs(x, h + 1);
			euler.pb(start);
		}
	}
}

// vector euler contains the euler tour of the following graph...
// simple dfs and addition of nodes visited and completed nodes combined form euler tour....
// height is not that necessary....
void jabru() {
	int n, p; cin >> n >> p;
	for (int i = 1; i < n; i++) {
		int x; cin >> x;
		adj[x].pb(i + 1);
		ad
	}
	dfs(1, 0);

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	t = 1;
	cin >> t;
	while (t--) {
		jabru();
	}


	return 0;
}