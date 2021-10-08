public class Pr_50_Int4 {

    public static void main(String[] args) {
        double x = 2.0;
        int n = 10;

        double answer = 1.0;
        int realN = n;
        long N = (long) n;

        if (n<0){
            N = -1 * N;
        }

        while(N > 0){

            if(N % 2 == 0){
                x = x * x;
                N /= 2;
            }
            else{
                answer = x * answer;
                N -= 1;
            }

        }

        System.out.println( realN >= 0 ? answer : 1/answer);

    }

}
