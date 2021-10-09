#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, n;
	cin>>x>>n;
	int array[n];
	for (int i=0; i<n; i++){
		cin>>array[i];
	}
	
	int a = 0, b = n-1;
	while (a <= b){
		int k = (a+b)/2;
		if (array[k] == x){
		// x found at index k
		cout<<k;
		}
		if (array[k] > x) b = k-1;
		else a = k+1;
	}	
	return 0;
}

// O(log n)
