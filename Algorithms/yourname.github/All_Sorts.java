import java.io.*;
import java.util.*;

class MergeSort{
	/// MERGE SORT
	void merge(int arr[], int p, int q, int r)
	{
		int n1 = q - p + 1;
		int n2 = r - q;
		
		int left[] = new int[n1 + 1];
		int right[] = new int[n2 + 1];

	    for (int i = 0; i < n1; i++)
	        left[i] = arr[p + i];

	    for (int j = 0; j < n2; j++)
	        right[j] = arr[q + j + 1];

	    left[n1] = 999999999;
	    right[n2] = 999999999;

	    int i = 0, j = 0;

	    for (int k = p; k <= r; k++)
	    {
	        if (left[i] < right[j])
	        {
	            arr[k] = left[i];
	            i++;
	        }
	        else
	        {
	            arr[k] = right[j];
	            j++;
	        }
	    }
	}

	void mergeSort(int arr[], int p, int r)
	{
	    if (p < r)
	    {
	    	int q = (p + r) / 2;

	        //recursively divide

	        mergeSort(arr, p, q);
	        mergeSort(arr, q + 1, r);

	        //recursively merge and sort
	        merge(arr, p, q, r);
	    }
	}
}

class QuickSort{
	/// QUICK SORT
	static int partition(int arr[], int low, int high)
	{
		int pivot = arr[high];
		int i = (low - 1);

	    for (int j = low; j <= high - 1; j++)
	    {

	        if (arr[j] < pivot)
	        {
	            i++;
	            int k = arr[i];
	            arr[i] = arr[j];
	            arr[j] = k;
	        }
	    }
	    int k = arr[i + 1];
            arr[i + 1] = arr[high];
            arr[high] = k;
        
	    return (i + 1);
	}

	void quickSort(int arr[], int low, int high)
	{
	    if (low < high)
	    {
	    	int pi = partition(arr, low, high);

	        quickSort(arr, low, pi - 1);
	        quickSort(arr, pi + 1, high);
	    }
	}
}

class HeapSort{
	/// HEAP SORT
	
	static void heapify(int arr[], int n, int i)
	{
		int largest = i;
		int l = 2 * i + 1;
		int r = 2 * i + 2;

	    if (l < n && arr[l] > arr[largest])
	        largest = l;

	    if (r < n && arr[r] > arr[largest])
	        largest = r;

	    if (largest != i)
	    {
	    	int k = arr[i];
            arr[i] = arr[largest];
            arr[largest] = k;
            
	        heapify(arr, n, largest);
	    }
	}

	void heapSort(int arr[], int n)
	{
	    for (int i = n / 2 - 1; i >= 0; i--)
	        heapify(arr, n, i);

	    for (int i = n - 1; i > 0; i--)
	    {
	    	int k = arr[0];
            arr[0] = arr[i];
            arr[i] = k;
            
	        heapify(arr, i, 0);
	    }
	}
}

public class Sorting {
	 static void printArray(int arr[], int n)
	 {
	     for (int i = 0; i < n; i++)
	         System.out.print(arr[i] + "\t");
	     System.out.println();
	 }
	static int arr[] = new int[1000000];
	
	public static void main(String [] args) throws IOException {
		
		MergeSort ms = new MergeSort();
		QuickSort qs = new QuickSort();
		HeapSort hs = new HeapSort();
		
		//printArray(arr, n);
	    int n = 10;
	    
	    //File fp = new File("q1_plot_java.txt");


	    double merge_sort_time, quick_sort_time, heap_sort_time, mst, qst, hst;
	    
	    Random random = new Random();
	    
	    FileWriter fwrite = new FileWriter("q1_plot_java.txt");
	    
	    while (n <= 1000000)
	    {
	        mst = qst = hst = 0.0;
	        
	        for (int k = 1; k <= 10; k++)
	        {
	            for (int i = 0; i < n; i++)
	            {
	                arr[i] = random.nextInt(10000);
	            }
	            
	            ///MERGE SORT BEGINS
	            long startTime = System.nanoTime();
	            ///START
	            ms.mergeSort(arr, 0, n - 1);
	            ///END
	            long endTime = System.nanoTime();
	            ///MERGE SORT ENDS
	            mst += ((double)(endTime - startTime)) / 1000000000.0;
	        }
	        merge_sort_time = mst / 10;

	        for (int k = 1; k <= 10; k++)
	        {
	        	for (int i = 0; i < n; i++)
	            {
	                arr[i] = random.nextInt(10000);
	            }

	            ///MERGE SORT BEGINS
	            long startTime = System.nanoTime();
	            ///START
	            qs.quickSort(arr, 0, n - 1);
	            ///END
	            long endTime = System.nanoTime();
	            ///MERGE SORT ENDS
	            qst += ((double)(endTime - startTime)) / 1000000000.0;
	        }
	        quick_sort_time = qst / 10;

	        for (int k = 1; k <= 10; k++)
	        {
	        	for (int i = 0; i < n; i++)
	            {
	                arr[i] = random.nextInt(10000);
	            }

	            ///MERGE SORT BEGINS
	            long startTime = System.nanoTime();
	            ///START
	            hs.heapSort(arr, n);
	            ///END
	            long endTime = System.nanoTime();
	            ///MERGE SORT ENDS
	            hst += ((double)(endTime - startTime)) / 1000000000.0;
	        }
	        heap_sort_time = hst / 10;
	        
	        System.out.printf("%d, %f, %f, %f\n", n, merge_sort_time, quick_sort_time, heap_sort_time);
	        //System.out.println(n + ", " + merge_sort_time + ", " + quick_sort_time + ", " + heap_sort_time);
	        
	        fwrite.write(n + ", " + String.valueOf(merge_sort_time) + ", " + String.valueOf(quick_sort_time) + ", " + String.valueOf(heap_sort_time) + "\n"); 
	        
	        n *= 10;
	    }
	    fwrite.close();
	}
}
