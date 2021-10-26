#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void shuffle(int arr[]) {
    int n = sizeof(arr) / sizeof(int);
    srand(time(NULL));
    int j;
    for (int i = n - 1; i > 0; i--) {
        j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }
}
bool compare(int a, int b) {
    return a > b;
}
int partition(int arr[], int s, int e, bool (&compare)(int a, int b)) {
    int i = s - 1;
    int j = s, pivot = arr[e];
    for (; j < e; j++) {
        if (compare(arr[j], pivot)) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
void quickSort(int arr[], int s, int e, bool (&compare)(int a, int b)) {
    if (s >= e)
        return;
    int p = partition(arr, s, e, compare);
    quickSort(arr, s, p - 1, compare);
    quickSort(arr, p + 1, e, compare);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    shuffle(arr);
    quickSort(arr, 0, n - 1, compare);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
