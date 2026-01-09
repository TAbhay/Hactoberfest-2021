import java.util.Scanner;
public class Even_odd{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter Number to check even or odd!");
        int n = s.nextInt();
        if(n%2==0){
            System.out.println("Entered Number is even");
        }else{
            System.out.println("Entered Number is Odd");
        }
        s.close();
    }
}