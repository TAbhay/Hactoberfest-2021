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
#define debug(x) cout<<"AA Baju Smit------> "<<#x<<" -> "<<x<<endl
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mod 1000000007
#define ciN cin
#define Z(s) get<0>(s)
#define O(s) get<1>(s)
#define T(s) get<2>(s)
////////////////////////////////////////////////////////////////
vi adj[100001];
vector<bool> vis(100001, 0);
vi dir(100001, 0);

bool flag = 0;
void dfs(int start) {
	vis[start] = 1;
	for (auto x : adj[start]) {
		if (dir[x] == dir[start]) {
			flag = 1;
		}

		if (!vis[x]) {
			dir[x] = dir[start] == 1 ? -1 : 1;
			dfs(x);
		}
	}
}
void jabru() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		adj[a].pb(b); adj[b].pb(a);
	}
	for (int i = 0; i <= n; i++) {// Replace n with max value of vertex..
		if (!vis[i]) {
			dir[i] = 1;
			dfs(i);
		}
	}
	if (flag) {
		// Graph is not bipartite..
	}



	// Graph is bipartite...
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

//cout << ans << endl;