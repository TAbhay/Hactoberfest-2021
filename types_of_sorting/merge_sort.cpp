#include <iostream>
using namespace std;

void Merge(int *a, int left, int right, int mid){
	int i, j, k;
	int temp[right-left+1];
	i = left;
	k = 0;
	j = mid + 1;
 
	while(i <= mid && j <= right){
		if(a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while(i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j <= right){
		temp[k] = a[j];
		k++;
		j++;
	}
	for(i = left; i <= right; i++){
		a[i] = temp[i-left];
	}
}
 
void MergeSort(int *a, int left, int right){
	int mid;
	if (left < right){
		mid = (left + right)/2;
		MergeSort(a, left, mid);
		MergeSort(a, mid+1, right);
		Merge(a, left, right, mid);
	}
}
 
int main(){
	int n, i;
	int *arr;
	cout << "Enter number of elements: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter elements: ";
	for(i = 0; i < n; i++)
		cin >> arr[i];
 
	MergeSort(arr, 0, n-1);

	cout << "Merge Sorted Array:";
	for (i = 0; i < n; i++)
        cout << " " << arr[i];
	return 0;
}
