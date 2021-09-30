import java.util.Scanner;
class BinarySearch {

	int binarySearch(int arr[], int l,int r, int x)
	{
		if (r >= l && l<arr.length-1) {
		
			int mid = l + (r - l) / 2;
			if (arr[mid] == x)
				return mid;

			if (arr[mid] > x)
				return binarySearch(arr, l, mid - 1, x);
			return binarySearch(arr, mid + 1, r, x);
		}

		return -1;
	}
	public static void main(String args[])
	{
		BinarySearch ob = new BinarySearch();
        System.out.println("Enter number of elements : "); 
        Scanner s=new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter elements in ascendibg order: ");
        for(int i=0; i < n; i++){  
                arr[i] = s.nextInt(); 
        }   
        
        System.out.println("Enter element to be searched : ");
		int x = s.nextInt();
		int result = ob.binarySearch(arr, 0, n - 1, x);
		if (result == -1)
			System.out.println("Element not present");
		else
			System.out.println("Element found at index " + result);
        s.close();
	}
}
