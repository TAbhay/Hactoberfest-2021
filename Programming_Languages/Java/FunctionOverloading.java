// Name - Sparsh Bhardwaj
// Location - Bengaluru
// Hactoberfest

public class FunctionOverloading{
  
  public staic int sum(int a, int b){
    int result = a + b;
    return result;
  }
  
  public static int sum(int a){
    return a + 1;  
  }
  
  public static void main(String[] args){
    int a = 10;
    int b = 5;
    System.out.println(sum(a));
    System.out.println(sum(a,b));
  }
  
}
