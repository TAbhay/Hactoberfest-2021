//Classic
//g++ -std=c++17 -O2 -Wall a.cpp -o test
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization ("unroll-loops")
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
#define endl "\n"
#define debug2(x,y) cout<<"This side ----> "<<#x<<" -> "<<x<<" | "<<#y<<" -> "<<y<<endl;
#define debug(x) cout<<"This side    ----> "<<#x<<" -> "<<x<<endl
//#define ai(a, n) for (int ele = 0; ele < n; ele++) cin >> a[ele];
//#define ao(a, n) {for (int ele = 0; ele < (n); ele++) {cout << a[ele]<<" "; } cout << '\n';}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mall map<ll,ll>
#define ciN cin
#define gu(a,s) get<a>(s)
#define tin tuple<ll,ll,ll>
#define ter(x,y,z) ((x)?y:z)
/////////////
bool isGoogles = 0;
const ll maxn = 1e5 + 10;
const ll max_val = 2e5 + 10;
const ll mod = 1000000007;
const ll bits = 19;
ll caseNumber = 1;
/*

*/
////////////////////////////////////////////////////////////////
void solve() {
	int n; cin >> n;
	vi v(n);
	int dig[10][2];
	for (int i = 0; i < 10; i++) {
		dig[i][0] = 0; dig[i][1] = 0;
	}

	For(i, 0, n) {
		int x; cin >> x;
		int mx = v[i] % 10, mn = v[i] % 10;
		int tem = v[i];
		while (tem > 0) {
			mx = max(mx, v[i] % 10); mn = min(mn, v[i] % 10);
		}
		int s = mx * 11 + mn * 7;
		s %= 100;
		int cnt = 0;
		int last = 0;
		while (s > 0) {
			last = s % 10;
			s /= 10;
			cnt++;
		}
		if (cnt == 1 || cnt == 0) {
			if (i % 2) {
				dig[0][1]++;
			}
			else
				dig[0][0]++;
		}
		else {
			if (i % 2) {
				dig[last][1]++;
			}
			else
				dig[last][0]++;
		}

	}
	ll ans = 0;
	for (int i = 0; i < 10; i++) {
		int aa = (dig[i][0] * (dig[i][0] - 1)) / 2;
		int bb = (dig[i][1] * (dig[i][1] - 1)) / 2;
		ans += min(2, aa + bb);
	}
	cout << ans << endl;

}


bool TestCase = 0;



//////////////////////////////////////////////////////////////////






void brain_wash() {

}


/*

*/
//////////////////////////////////////////////////////////

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);

	ll t;
	t = 1;
	if (TestCase) {
		cin >> t;
	}
	while (t--) {
		if (isGoogles) {cout << "Case #" << caseNumber << ": ";} caseNumber++;
		jabru();
		brain_wash();

	}
	return 0;
}

/*
Sunday - Graph
Monday - Graph
Tuesday - Math
Wednesday - DP
Thursday - DP/RQ
Friday - RQ
Saturday - Tree
*/