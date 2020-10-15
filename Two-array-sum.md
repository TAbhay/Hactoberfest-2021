import java.util.Scanner;
public class CorrespondingSum {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of first array:");
		int n1 = sc.nextInt();
		if(n1>0)
		{
			int[] ar1 = new int[n1];
			System.out.println("Enter elements for first array:");
		for(int i=0;i<n1;i++)
			{
				ar1[i]=sc.nextInt();
			}
			System.out.println("Enter the size of second array:");
			int n2 = sc.nextInt();
			if(n2>0)
			{
				int[] ar2 = new int[n2];
				System.out.println("Enter elements for second array:");
				for(int i=0;i<n2;i++)
				{
					ar2[i]=sc.nextInt();
				}
				int max=0;
				int min=0;
				if(n1>=n2)
				{
					max= n1;
					min=n2;
				}
				else
				{
					max = n2;
					min = n1;
				}
					int sum[] = new int[n1];
					for(int i=0;i<min;i++)
					{
						sum[i]= ar1[i]+ar2[i];
					}
					if(n1==n2)
					{
						for(int i=0;i<max;i++)
						{
						System.out.println(sum[i]);
					    }
					}
					else
					{
					for(int i=min;i<max;i++)
					{
						sum[i] = ar1[i];
					}
					for(int i=0;i<max;i++)
					{
					System.out.println(sum[i]);
				}
					}
			}
			else
				System.out.println("Invalid array size");
		}
		else
			System.out.println("Invalid array size");
		

	}

}
