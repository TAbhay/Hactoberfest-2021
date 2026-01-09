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
const int MAXN = 100001;
vi adj[MAXN]
vector<bool>vis(MAXN, 0);
int components = 0;
int current_size = 0;
void dfs(int s) {
	current_size++;
	vis[s] = 1;
	for (auto x : adj[s]) {
		if (!vis[x]) {
			dfs(x);
		}
	}
}
void jabru() {
	int n; cin >> n;
	int v; cin >> v;
	for (int i = 0; i < v; i++) {
		int a, b; cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	vi sizes;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
			sizes.pb(current_size);
			current_size = 0;
			components++;
		}
	}

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