public class Pr_172_Int3 {

    public static void main(String[] args) {
        int n = 10;
        int count = 0;
        while(n>4){
            n /= 5;
            count += n;
        }
        System.out.println(count);
    }

}
