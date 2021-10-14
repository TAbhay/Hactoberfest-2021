#include<bits/stdc++.h>
using namespace std;

int minSum(int arr[], int n)
{
	
	priority_queue <int, vector<int>, greater<int> > pq;
	string num1, num2;

	for(int i=0; i<n; i++)
		pq.push(arr[i]);

	while(!pq.empty())
	{

		num1+=(48 + pq.top());
		pq.pop();
		if(!pq.empty())
		{
			num2+=(48 + pq.top());
			pq.pop();
		}
	}


	int a = atoi(num1.c_str());
	int b = atoi(num2.c_str());


	return a+b;
}

int main()
{
	int arr[] = {6, 8, 4, 5, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<minSum(arr, n)<<endl;
	return 0;
}

