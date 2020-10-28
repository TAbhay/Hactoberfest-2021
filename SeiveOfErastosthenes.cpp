#include<bits/stdc++.h>
using namespace std;

void SeiveOfEratosthenes(bool prime[], int n){
	for(int i=2;i*i<=n;i++){
		if(prime[i]==true){
			for(int j=i*2;j<=n;j+=i)
				prime[j]=false;
		}
	}
}

int main(){
	bool prime[(int)(1e6+1)];
	memset(prime,true,sizeof(prime));
	SeiveOfEratosthenes(prime,1e6);
	for(int i=2;i<1e6;i++){
		if(prime[i]==true)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

