package Stringss;

import java.util.Arrays;

public class Pr151_2 {

    public static void main(String[] args) {
        String s = "  Bob    Loves  Alice   ";

        int size = s.length();

        //System.out.println(size);


        StringBuilder answer = new StringBuilder();

        int i = size-1;
        int j;



        while(i>=0){
            if (s.charAt(i) == ' ') {
                i--;
            }
            else{
                j = i;
                while(s.charAt(i) != ' ' && i>=0) {
                    i--;
                }
                if(answer.length() > 0){
                    answer.append(' ');
                }
                for(int k=i+1;k<=j;k++) {
                    answer.append(s.charAt(k));
                }
            }
        }

        System.out.println(answer);

    }
}
