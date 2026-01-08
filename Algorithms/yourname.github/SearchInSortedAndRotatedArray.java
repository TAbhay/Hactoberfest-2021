package BinarySearch;

public class SearchInSortedAndRotatedArray {

		public static void main(String[] args) {
				
				int arr[] = {3,1};
				int target = 1;
				
				int ans = searchRotatedArray(arr,target);
				
				if(ans == -1)
				{
						System.out.println(target+" not present in array");
				}
				else
				{
						System.out.println(target+" present in array at "+ans+" index");
				}
		}
		static int searchRotatedArray(int a[], int target)
		{
				int n = a.length;
				int low = 0;
				int high = n - 1;
				
				while(low <= high)
				{
						int mid = (low + high) / 2;
						
						if(a[mid] == target) return mid;
						
						if(a[low] < a[mid])
						{
								if(target >= a[low] && target < a[mid])
								{
										high = mid - 1;
								}
								else
								{
										low = mid + 1;
								}
						}
						else
						{
								if(target < a[high] && target > a[mid])
								{
										low = mid + 1;
								}
								else
								{
										high = mid - 1;
								}
						}
				}
				return -1;
		}
}
