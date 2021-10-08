package Stringss;

public class Pr344_1 {

    public static void main(String[] args) {

        char[] s = {'H','e','l'};

        int size = s.length;

        for(int i=0;i< size/2; i++){
            char temp = s[i];
            s[i] = s[size-i-1];
            s[size-i-1] = temp;
        }

        for (char c : s) {
            System.out.println(c);
        }
    }

}
