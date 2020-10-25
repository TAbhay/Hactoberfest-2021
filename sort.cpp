// C++ implementation to sort the given matrix
#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

// function to sort the given matrix
void sortMat(int mat[SIZE][SIZE], int n)
{
	// temporary matrix of size n^2
	int temp[n * n];
	int k = 0;

	// copy the elements of matrix one by one
	// into temp[]
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			temp[k++] = mat[i][j];

	// sort temp[]
	sort(temp, temp + k);

	// copy the elements of temp[] one by one
	// in mat[][]
	k = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			mat[i][j] = temp[k++];
}

// function to print the given matrix
void printMat(int mat[SIZE][SIZE], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
}

// Driver program to test above
int main()
{
	int mat[SIZE][SIZE] = { { 5, 4, 7 },
							{ 1, 3, 8 },
							{ 2, 9, 6 } };
	int n = 3;

	cout << "Original Matrix:\n";
	printMat(mat, n);

	sortMat(mat, n);

	cout << "\nMatrix After Sorting:\n";
	printMat(mat, n);

	return 0;
}
