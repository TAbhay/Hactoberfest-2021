//Fibionacci is a popular sequnece f(n)=f(n-1)+f(n-2)
#include<bits/stdc++.h>
using namespace std;
int fibbionaci_rec(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	return fibbionaci_rec(n-1)+fibbionaci_rec(n-2);
}

int fibbionaci_bottomup_dp(int n)
{
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main()
{
	int n;
	cin>>n;
	//recursive fibbionaci sequence
	cout<<fibbionaci_rec(n)<<endl;
	//this is bottomup dp
	cout<<fibbionaci_bottomup_dp(n)<<endl;
	return 0;

}