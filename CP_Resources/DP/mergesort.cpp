#include<bits/stdc++.h>
using namespace std;

#define int long long

void cpc()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void merge(vector<int> &v, int l, int mid, int h)
{
	int n1 = mid - l + 1;
	int n2 = h - mid;
	int a1[n1], b1[n2];

	for (int i = 0; i < n1; i++)
	{
		a1[i] = v[l + i];
	}
	for (int j = 0; j < n2; j++)
	{
		b1[j] = v[mid + 1 + j];
	}

	int i = 0, j = 0;
	int k = l;
	while (i < n1 && j < n2)
	{
		if (a1[i] < b1[j])
		{
			v[k] = a1[i];
			i++; k++;
		}
		else
		{	v[k] = b1[j];
			k++; j++;
		}
	}

	while (i < n1)
	{
		v[k++] = a1[i++];
	}
	while (j < n2)
	{v[k++] = b1[j++];}
}



void mergesort(vector<int> &v, int l, int r)
{
	int mid = (l + r) / 2;
	if (l < r)
	{
		mergesort(v, l, mid);
		mergesort(v, mid + 1, r);
		merge(v, l, mid, r);
	}
	else
	{return;}
}




int32_t main()
{	cpc();

	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{cin >> v[i];}

	mergesort(v, 0 , n - 1);

	for (auto i : v)
	{cout << i << " ";}
	return 0;
}
