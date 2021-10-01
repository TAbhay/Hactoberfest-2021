/*Author- Soumak Poddar*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sll signed long long int
#define ull unsigned long long int
#define umax uintmax_t

#define um unordered_map
#define us unordered_set
#define mm multimap
#define pq priority_queue
#define pi pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define gi greater<int>

#define mp make_pair
#define pb push_back
#define fir first
#define sec second
#define M 1000000007

template<typename T>
T gcd(T a,T b)
{
   if(a==0)
      return b;
   return gcd(b%a,a);
}
template<typename T>
T lcm(T a,T b)
{
   T g=gcd<T>(a,b);
   return (a*b)/g;
}
template<typename T>
bool isprime(T n)
{
   if(n<=1)
      return false;
   for(int i=2;i<sqrt(n);i++)
      if(n%i==0)
         return false;
   return true;
}
vector<bool> prime;
void seive(ll n)
{
   prime.resize(n+1);
   fill(prime.begin(),prime.end(),true);
   prime[0]=prime[1]=false;
   for(int i=2;i*i<=n;i++)
   {
      if(prime[i]==true)
      {
         for(int j=i*i;j<=n;j+=i)
            prime[j]=false;
      }
   }
}

void solve();
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("error.txt", "w", stderr);
      freopen("output.txt", "w", stdout);
   #endif
   
   int t=1;
   // cin>>t;
   while(t--)
   {
      solve();
      cout<<"\n";
   }
   cerr<<"Time Taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return 0;
}

template<typename T>
class Graph
{
   map<T,list<T>> l;
public:
   void addEdge(T x,T y)
   {
      l[x].pb(y);
      l[y].pb(x);
   }

   void dfs_helper(T s,map<T,bool> &vis)
   {
      cout<<s<<" ";
      vis[s]=true;
      for(auto i:l[s])
      {
         if(!vis[i])
            dfs_helper(i,vis);
      }
   }

   void dfs(T s)
   {
      map<T,bool> vis;
      for(auto p:l)
      {
         T node=p.fir;
         vis[node]=false;
      }
      dfs_helper(s,vis);
   }
};

void solve()
{
   Graph <int> G;
   G.addEdge(0,1);
   G.addEdge(1,2);
   G.addEdge(2,3);
   G.addEdge(3,4);
   G.addEdge(4,5);
   G.addEdge(3,0);
   G.dfs(0);
}