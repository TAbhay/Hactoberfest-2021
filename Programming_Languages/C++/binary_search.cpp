#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int binary_search(int a[], int l, int r, int val)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == val)
        {
            return mid;
        }
        else if (a[mid] < val)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    int pos = binary_search(a, 0, n - 1, val);
    if (pos != -1)
    {
        cout << "Element found at position " << pos << endl;
    }
    else
    {
        cout << "Element not present in the array" << endl;
    }
    return 0;
}