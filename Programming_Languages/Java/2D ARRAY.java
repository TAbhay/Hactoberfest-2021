import java.util.Scanner;

public class C {
    public static void main(String[] args) {
     Scanner s = new Scanner(System.in);
     int n =s.nextInt();
     int[][] ar = new int[n][n];
         int z;
        for( int i=0;i<n;i++){
         for( int j=0;j<n;j++)
         {
               z = s.nextInt();
               ar[i][j]=z;
               
         }
        }
        int sum = 0;
        int sum1 = 0;
        for( int t=0;t<n;t++){
         for( int r=0;r<n;r++)
         {
            if (t == r) 
                    sum = sum + ar[t][r]; 
      
                
            if ((t + r) == (n - 1)) 
                    sum1 = sum1 + ar[t][r];   
               
               
         }
        }
        int SUM = sum-sum1;
        int q;
        if(SUM<0)
        {
          q = -(SUM);
        }
        else
            q = SUM;
        System.out.print(""+q);
    
    
    }
}