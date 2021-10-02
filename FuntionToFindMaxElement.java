// Name - Sparsh Bhardwaj 
// Country - India
// Hactoberfest 

public class array{
  
  public static void printArray(int[] arr){
    for(int i=0; i<n; i++){
        int n = arr.length();
        System.out.println(arr[i]);
    }
  } 
  
  public static int[] takeInput(){
    
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] arr = new int[n];
    
      for(int i=0; i<n;i++){
          System.out.println("Enter element at " +i+ " th Index");
          arr[i] = sc.nextInt();
      }
  }
  
  public static void main(String[] args){
    int[] arr = takeInput();
    printArray(arr);
  }
    
}
