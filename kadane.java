class kadane {
	public static void main(String[] args) {
		int[] a = { -1, 0, 4, 2, -7, 1, 2, -3 };
		System.out.println("Max. sum -> " + maxSum(a));
	}

	static int maxSum(int a[]) {
		int size = a.length;
		int max_temp = Integer.MIN_VALUE, max_end = 0;

		for (int j = 0; j < size; j++) {
			max_end = max_end + a[j];
			if (max_temp < max_end)
				max_temp = max_end;
			if (max_end < 0)
				max_end = 0;
		}
		return max_temp;
	}
}
