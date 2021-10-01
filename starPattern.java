import java.util.Scanner;
public class starPattern {
    public static void main(String[]args) {
        Scanner o=new Scanner(System.in);
        System.out.println("Enter rows :");
        int s=o.nextInt();
        // System.out.println(sum(9,0));
        for(int i=1;i<=s;i++) {
            for(int j=1;j<=i;j++) {
                System.out.print("*");
            }
            System.out.println("");
        }

    }
    
}
