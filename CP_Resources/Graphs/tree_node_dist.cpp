// Qg3
// //g++ -std=c++17 -O2 -Wall a.cpp -o test
// _()_
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vp vector<pi>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define For(i,a,b) for(ll i=a;i<b;i++)
#define debug2(x,y) cout << "\033[" << 31 << "m" <<"Debug "<<#x<<" -> "<< x<<" | "<<#y<<" -> "<<y << "\033[" << 39 << "m"<<endl;
#define debug(x) cout << "\033[" << 31 << "m" <<"Debug "<<#x<<" -> "<< x << "\033[" << 39 << "m"<<endl;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mall map<ll,ll>
#define ciN cin
#define gu(a,s) get<a>(s)
#define tin tuple<ll,ll,ll>
#define ter(x,y,z) ((x)?y:z)

/////////////
const ll maxn = 1e5 + 3;
const ll nax = 2e6 + 2;
const ll max_val = 5e4 + 10;
const ll mod = 998244353;
const ll bits = 18;
ll caseNumber = 1;
#define endl "\n"
/////////////////////////////////////////////////////////////////

int n;
vi adj[maxn];
int dp[19][maxn]; // set bits according to N
vi par(maxn, 0);
vi hei(maxn, 0);
void dfs(int st, int ok, int h) {
	par[st] = ok;
	hei[st] = h;
	for (auto x : adj[st]) {
		if (x != ok)dfs(x, st, h + 1);
	}
}

int getKthAns(int node, int k) {
	if (k == 0)return node;
	for (int i = 18; i > -1; i--) {
		if ((k & (1 << i))) {
			k -= (1 << i);
			node = dp[i][node];
		}
	}
	return node;
}
bool check(int mid, int a, int b) {
	return getKthAns(a, mid) == getKthAns(b, mid);
}
int calcDist(int a, int b) {
	if (hei[a] > hei[b])swap(a, b);
	ll dist = hei[b] - hei[a];
	b = getKthAns(b, hei[b] - hei[a]);
	ll l = 0, r = 1e5; // migth need to change R........
	while (r - l > 1) {
		ll mid = (r + l) / 2;
		if (check(mid, a, b)) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	if (check(l, a, b)) {
		dist += (2 * l);
	}
	else {
		dist += r * 2;
	}
	return dist;
}
/*

Make Sparse Table
Take query

*/
void solve() {
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b; cin >> a >> b;
		adj[a].pb(b); adj[b].pb(a);
	}
	for (int i = 0; i < 19; i++)
		for (int j = 1; j <= n; j++)
			dp[i][j] = 1;

	dfs(1, 1, 0);
	for (int i = 1; i <= n; i++)dp[0][i] = par[i];
	for (int j = 1; j < 19; j++) {
		for (int i = 1; i <= n; i++) {
			dp[j][i] = dp[j - 1][dp[j - 1][i]];
		}

	}
	cout << calcDist(1, 3) << endl;

}




bool TestCase1 = 0;
bool isGoogles = 0;



//////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	t = 1;



	if (TestCase1) {
		cin >> t;
	}
	ll here = 1;
	while (t--) {
		//	if (isGoogles)
		//		cout << "Case #" << here << ": ";
		solve();

		//here++;
	}
	return 0;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH

*/