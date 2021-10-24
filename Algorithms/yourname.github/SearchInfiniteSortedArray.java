package BinarySearch;

public class SearchInfiniteSortedArray {

		public static void main(String[] args) {
				
				int a[] = {1,3,7,8,12,58,72,89,90,98,99,123,234,345,456,567,678,789};
				int target = 124;
				
				int ans = searchInfinite(a,target);
				
				if(ans == -1)
				{
						System.out.println(target+" not present");
				}
				else
				{
						System.out.println(target+" present inside the array at "+ans+" index");
				}
		}
		static int searchInfinite(int a[], int target)
		{
				int low = 0;
				int high = 1;
				
				while(a[high] < target)
				{
						low = high;
						high = 2 * high;
				}
				return binarySearch(a,target,low,high);
		}
		static int binarySearch(int a[], int key, int low, int high)
		{
				while(low <= high)
				{
						int mid = (low + high) / 2;
						
						if(a[mid] == key)
						{
								return mid;
						}
						else if(a[mid] < key)
						{
								low = mid + 1;
						}
						else
						{
								high = mid - 1;
						}
				}
				return -1;
		}
}
