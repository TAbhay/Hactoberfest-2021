import java.util.Scanner;
public class Bubble_Sort{  
    static void bubbleSort(int[] arr) {  
        int n = arr.length;  
        int temp = 0;  
         for(int i=0; i < n; i++){  
                 for(int j=1; j < (n-i); j++){  
                          if(arr[j-1] > arr[j]){  
                                 //swap elements  
                                 temp = arr[j-1];  
                                 arr[j-1] = arr[j];  
                                 arr[j] = temp;  
                         }  
                          
                 }  
         }  
  
    }  
    public static void main(String[] args) {  
                System.out.println("Enter number of elements to be Sorted: "); 
                Scanner s=new Scanner(System.in);
		int n = s.nextInt();
		int arr[] = new int[n];

                System.out.println("Enter elements to be sorted: ");
                for(int i=0; i < n; i++){  
                        arr[i] = s.nextInt(); 
                } 
                System.out.println("Array Before Bubble Sort");  
                for(int i=0; i < n; i++){  
                        System.out.print(arr[i] + " ");  
                }  
                System.out.println();  
                  
                bubbleSort(arr);//sorting array elements using bubble sort  
                 
                System.out.println("Array After Bubble Sort");  
                for(int i=0; i < n; i++){  
                        System.out.print(arr[i] + " ");  
                }  
                s.close();
        }  
        
}  