public class Pr_9_Int2 {

    public static void main(String[] args) {

        int x = 12321;

        if(x<0 || x % 10 ==0 && x!=0){
            System.out.println("false");
        }

        int reverse = 0;
        while(x > reverse){
            int t = x %10;
            reverse = reverse*10 + t;
            x = x / 10;
        }

        System.out.println(x == reverse || x == reverse/10);


    }

}
