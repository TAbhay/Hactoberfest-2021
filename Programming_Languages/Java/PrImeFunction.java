// Name - Sparsh Bhardwaj
// Location - Bengaluru
// Hactoberfest


public class Prime{
  
  public static boolean checkPrime(int n){
    
    int div = 2;
    while(div <= n/2){
      if(n%div==0){
        return false;
      }
      div = div + 1;
    }
    return true;
  }
  
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    boolean isPrime = checkPrime(n);
    System.out.println(isPrime)
  }
  
}
