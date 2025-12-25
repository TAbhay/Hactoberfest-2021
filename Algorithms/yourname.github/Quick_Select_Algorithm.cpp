#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int s, int e) {
    int pivot = a[e];
    int ind = s;
    for (int i = s; i < e; i++) {
        if (a[i] <= pivot) {
            swap(a[i], a[ind]);
            ind++;
        }
    }
    swap(a[e], a[ind]);
    return ind;
}

int find_kth_smallest(int a[], int s, int e, int k) {
    if (s <= e) {
        int pind = partition(a, s, e);
        if (pind == k) {
            return a[pind];
        } else if (pind > k) {
            return find_kth_smallest(a, s, pind - 1, k);
        } else {
            return find_kth_smallest(a, pind + 1, e, k);
        }
    }
    return INT_MAX; // Return a large value if k is out of bounds
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    if (k > 0 && k <= n) {
        cout << find_kth_smallest(a.data(), 0, n - 1, k - 1) << endl;
    } else {
        cout << "Invalid value of k" << endl;
    }
    return 0;
}
