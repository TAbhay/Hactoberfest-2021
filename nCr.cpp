#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

/*Use ll with this algorithm */

vector<int> fact(1e6);

int power(int x, int y, int p) 
{ 
    int res = 1;
    x = x % p;
    while (y > 0) 
    {
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
}   

int modInverse(int n, int p){ 
    return power(n, p-2, p); 
}

void calFactorial(int mod){
	fact[0] = 1;
	int n = fact.size();
	for(int i = 1; i < n; i ++){
		fact[i] = (fact[i-1]*i)%mod;
	}
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    int dr = modInverse(fact[r], mod);
    int dnr = modInverse(fact[n - r], mod);
    int ans = ((fact[n] % mod) * (dr % mod)) % mod;
    ans = (ans * (dnr % mod))%mod;
    return ans % mod;
}


int32_t main(){
	int n,r;
	cin>>n>>r;
	calFactorial(mod);
	cout << nCr(n, r) << endl;
	return 0;
}