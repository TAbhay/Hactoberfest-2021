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
vector<tuple<int, int, int>>adj;
vi link(200001, 0), siz(200001, 0);
int find(int x) {
	while (x != link[x])x = link[x];
	return x;
}
bool same(int a, int b) {
	return find(a) == find(b);
}
void unite(int a, int b) {
	a = find(a);
	b = find(b);
	if (siz[a] < siz[b])swap(a, b);
	siz[a] += siz[b];
	link[b] = a;
}

void jabru() {
	adj.clear();

	ll n, m, k; cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		link[i] = i;
		siz[i] = 1;
	}
	sort(all(adj));
	int ans = 0;
	for (auto x : adj) {
		int a = get<1>(x), b = get<2>(x);
		if (!same(a, b)) {
			unite(a, b);
			ans += get<0>(x);
		}
	}
	cout << ans << endl;

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