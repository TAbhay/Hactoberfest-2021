package BinarySearch;

public class BinarySearchAlgorithm {

		public static void main(String[] args) {
				
				int arr[] = {-4,-1,3,7,10,11};
				int n = arr.length;
				int target = 11;
				
//				int ans1 = binarySearch1(arr,target);
//				if(ans1 == -1)
//				{
//						System.out.println(target+ " is not present in the array");
//				}
//				else
//				{
//						System.out.println(target + " present at " + ans1 + " index");
//				}
				
				int low = 0;
				int high = n - 1;
				int ans2 = binarySearch2(arr,target,low,high);
				//T.C. = O(Logn), S.C. = O(Logn) //Slower
				if(ans2 == -1)
				{
						System.out.println(target+ " is not present in the array");
				}
				else
				{
						System.out.println(target + " present at " + ans2 + " index");
				}
		}
		static int binarySearch1(int a[], int target)
		{
				int n = a.length;
				int low = 0;
				int high = n - 1;
				
				while(low <= high)
				{
						int mid = (low + high) / 2;
						
						if(a[mid] == target)
						{
								return mid;
						}
						else if(a[mid] < target)
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
		static int binarySearch2(int a[], int target, int low, int high)
		{
				if(low > high) return -1;
				
				int mid = (low + high) / 2;
				
				if(a[mid] == target) return mid;
				
				if(a[mid] < target)
				{
						return binarySearch2(a,target,mid+1,high);
				}
				return binarySearch2(a,target,low,mid-1);
		}
}
