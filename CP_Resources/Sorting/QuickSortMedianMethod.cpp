

#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

void swap(int *elemToSwap, int *elemToSwapWith) {
    int temp = *elemToSwap;
    *elemToSwap = *elemToSwapWith;
    *elemToSwapWith = temp;
}

void print(int arrayToBePrinted[], int sizeOfArray) {
    int i;
    for (i = 0; i < sizeOfArray; i++)
        cout << arrayToBePrinted[i] << " ";
    cout << endl;
}

int getMedian(int* A, int i, int j, int k) {
    int first = A[i];
    int middle = A[j];
    int last = A[k];

// median is the one whose value lies in between the other 2 elements

    if (first >= middle && first <= last || first >= last && first <= middle) {
        return i;
    } else if (middle >= first && middle <= last || middle >= last && middle <= first) {
        return j;
    } else {
        return k;
    }
}

int partition(int arrayToBeSorted[], int start, int end) {
// Select the pivot element
    int pivot = arrayToBeSorted[end];
    int i = (start - 1);

    // Put the elements smaller than pivot on the left
    // and greater than pivot on the right of pivot
    for (int j = start; j < end; j++) {
        if (arrayToBeSorted[j] <= pivot) {
            i++;
            swap(&arrayToBeSorted[i], &arrayToBeSorted[j]);
        }
    }

    swap(&arrayToBeSorted[i + 1], &arrayToBeSorted[end]);
    return (i + 1);
}
int num_partitions=0;
void QuickSort(int arrayToBeSorted[], int start, int end) {
    if (start < end) {
        // Select pivot position and put all the elements smaller
        // than pivot on left and greater than pivot on right
        int pivot = partition(arrayToBeSorted, start, end);
        num_partitions++;
        // Sort the elements on the left of pivot
        QuickSort(arrayToBeSorted, start, pivot - 1);

        // Sort the elements on the right of pivot
        QuickSort(arrayToBeSorted, pivot + 1, end);
    }
}


int main() {
    int arrayOfNumbers[100];
    int arrayOfNumbers1[1000];
    int arrayOfNumbers2[10000];
    int arrayOfNumbers3[100000];

    srand ( time(NULL) );
    for (int i = 0; i < 100; i++) {
        arrayOfNumbers[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < 1000; i++) {
        arrayOfNumbers1[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < 10000; i++) {
        arrayOfNumbers2[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < 100000; i++) {
        arrayOfNumbers3[i] = 1 + rand() % 100;
    }


    int sizeOfArray = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    int sizeOfArray1 = sizeof(arrayOfNumbers1) / sizeof(arrayOfNumbers1[0]);
    int sizeOfArray2 = sizeof(arrayOfNumbers2) / sizeof(arrayOfNumbers2[0]);
    int sizeOfArray3 = sizeof(arrayOfNumbers3) / sizeof(arrayOfNumbers3[0]);

    //Sorting Array 1
    auto start = high_resolution_clock::now();
    QuickSort(arrayOfNumbers,0,sizeOfArray);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Sorted Array 1 in : " << duration.count() << " microseconds" << endl;
    print(arrayOfNumbers,sizeOfArray);
    cout<<"<<<<<<<<<<<------------------>>>>>>>>>>>"<<endl;

    //Sorting Array 2

    start = high_resolution_clock::now();
    QuickSort(arrayOfNumbers1,0,sizeOfArray1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Sorted Array 2 in : " << duration.count() << " microseconds" << endl;
    cout<<"<<<<<<<<<<<------------------>>>>>>>>>>>"<<endl;

    //Sorting Array 3
    start = high_resolution_clock::now();
    QuickSort(arrayOfNumbers2,0,sizeOfArray2);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Sorted Array 3 in : " << duration.count() << " microseconds" << endl;
    cout<<"<<<<<<<<<<<------------------>>>>>>>>>>>"<<endl;

    //Sorting Array 4
    start = high_resolution_clock::now();
    QuickSort(arrayOfNumbers3,0,sizeOfArray3);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Sorted Array 4 in : " << duration.count() << " microseconds" << endl;
}
