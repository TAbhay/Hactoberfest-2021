import java.util.Scanner;

public class LinearSearch{

public static void main(String [] args){

int x;
int a[]=new int[100];
boolean found=false;
Scanner scan=new Scanner(System.in);

System.out.println("enter the size of the elements");
int n=scan.nextInt();
System.out.println("enter "+n+" elements ");
for(int i=0;i<n;i++)
a[i]=scan.nextInt();

System.out.println("enter the  elements to find in list");
x=scan.nextInt();


for(int i=0;i<n;i++)
{
	if(a[i]==x)
	{
	System.out.println("element found at position:\t"+(i+1));
	found=true;
	 break;
	}
}

if(!found)
System.out.println("element not found in list");

}

}