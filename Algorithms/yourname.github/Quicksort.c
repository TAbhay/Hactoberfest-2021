#include <string.h>
#include <stdio.h>
#include <stdlib.h>

enum {MAX_SIZE = 1000};
int a[MAX_SIZE];
void fillArray(int a[], int size)
{ 
	int i;
	for (i = 0; i < size; i++)
		a[i] = rand();
}
void swap(int a[], int i, int j)
{ 
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int partition(int a[], int left, int right)
{ 
	int first = left-1;
	int last = right;
	for (;;)
	{ 
		while (a[++first] < a[right]);
		while (a[right] < a[--last])
		if (last == left)
			break;
		if (first >= last)
			break;
		swap(a, first, last);
	}
	swap(a, first, right);
	return first;
}

void quicksort(int a[], int left, int right)
{ 
	if (right > left)
	{ 
		int mid = partition(a, left, right);
		quicksort(a, left, mid - 1);
		quicksort(a, mid + 1, right);
	}
}
int main(void)
{ 
	fillArray(a, MAX_SIZE);
	quicksort(a, 0, MAX_SIZE - 1);
	return 0;
}
