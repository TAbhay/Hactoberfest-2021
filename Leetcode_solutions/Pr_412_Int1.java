import java.util.ArrayList;
import java.util.List;

public class Pr_412_Int1 {

    public static void main(String[] args) {
        List<String> list = new ArrayList<>();

        int n = 15;

        for(int i=1;i<=n;i++){
            if(i%3 == 0 && i%5 == 0){
                list.add("FizzBuzz");
            }
            else if(i%3 == 0){
                list.add("Fizz");
               // answer[i-1] = "Fizz";
            }
            else if(i%5 == 0){
                list.add("Buzz");
                //answer[i-1] = "Buzz";
            }
            else{
                list.add(String.valueOf(i));
                //answer[i-1] = String.valueof(i);
            }
        }

        System.out.println(list);

    }

}
