// Name - Sparsh Bhardwaj
// Location - Bengaluru
// Hactoberfest



public factorial NCR{
    
  public static int factorial(int sum){
    int fact = 1;
    for(int i = 1;i<num;i++){
      fact *= i;
    }
    return fact;
  }
  
  public static void main(String[] args){
    Scanenr sc = new Scanner(System.in);
    int n = sc.nextInt();
    int r = sc.nextInt();
    
    int factN = factorial(n);
    int factR = factorial(r);
    int factNR = factorial(n - r);
    
    int result = factN/(factR * factNR);
    System.out.println(result);
  }
  
}
