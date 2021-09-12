import java.util.Scanner;

// Other imports go here// Do NOT change the class name

class LeapYear
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
      int t=sc.nextInt();
      if(t%400==0 || t%4==0 &&t%100!=0)
        System.out.println("Yes! This is Leap Year");
      else
        System.out.println(" Oh! This is not a Leap Year");
    }
}
