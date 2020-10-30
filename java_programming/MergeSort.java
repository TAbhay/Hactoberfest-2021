import java.util.Scanner;
import java.util.Random;
public class Program5 {
	public static void main(String[] args)
	{
		Scanner read= new Scanner(System.in);
		int a[]= new int[10000];
		long start, end; int i;
		System.out.println("Enter the number of elements to sort");
		int n=read.nextInt();
		Random rand= new Random();
		for(i=0;i<n;i++)
			a[i]=rand.nextInt(100);
		System.out.println("Array elements to be sorted are");
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
		System.out.println();
		//Program5 ob=new Program5();
		start=System.nanoTime();
		MergeSort(a,0,n-1);
		end=System.nanoTime();
		System.out.println("The sorted array is");
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
		System.out.println();
		System.out.println("The time taken "+(end-start)+"ns");  
	}
    static void MergeSort(int a[], int l, int h)
    {
    	int mid;
    	if(l<h)
    	{
    		mid=(l+h)/2;
    		MergeSort(a,l,mid);
    		MergeSort(a,mid+1,h);
    		Merge(a,l,mid,h);
    	}
    }
    static void Merge(int a[], int l, int mid, int h)
    {
    	int i=l,j=mid+1,k=l,m,b[]=new int[10000];
    	while((i<=mid)&&(j<=h))
    	{
    		if(a[i]<=a[j])
    			b[k++]=a[i++];
    		else
    			b[k++]=a[j++];
    	}
    	if(i>mid)
    	  for(m=j;m<=h;m++)
    		  b[k++]=a[m];
    	else
    		for(m=i;m<=mid;m++)
    			b[k++]=a[m];
    	for(m=l;m<=h;m++)
    		a[m]=b[m];
    }
}
