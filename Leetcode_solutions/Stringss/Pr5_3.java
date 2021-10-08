package Stringss;

import java.util.LinkedHashMap;
import java.util.Map;


public class Pr5_3 {

    public static void main(String[] args) {

        String s = "abcba";

//        Scanner sc = new Scanner(System.in);
//        s = sc.nextLine();



        Map<String, Integer> map = new LinkedHashMap<>();

        boolean flag;

        int i;
        int size = s.length();
        int j;
        int max = 0;

        for(i=0;i<size-1;i++){
            for(j= size-1; j>i;j--){

                if(max < j-i+1){
                    if(s.charAt(j) == s.charAt(i)){
                        int tempi = i;
                        int tempj = j;
                        flag = true;

                        while(tempi<tempj){
                            if(s.charAt(tempi) != s.charAt(tempj)){
                                flag = false;
                                break;
                            }
                            tempi++;
                            tempj--;
                        }

                        if(flag){
                            String temp = s.substring(i,j+1);
                            max = temp.length();
                            map.put(temp,max);
                            // if(temp.length() == size || temp.length() == size-i - 1){
                            //     return temp;
                            // }
                            break;
                        }

                    }
                }

            }
        }

        if(map.isEmpty()){
            String e = ""+s.charAt(0);
            System.out.println(e);
        }

        else {

            //System.out.println(map);

            Map<String, Integer> sorted = new LinkedHashMap<>();

            map.entrySet().stream()
                    .sorted((k1, k2) -> -k1.getValue().compareTo(k2.getValue()))
                    .forEach(k -> sorted.put(k.getKey(), k.getValue()));

            System.out.println(sorted);

            Map.Entry<String, Integer> entry = sorted.entrySet().iterator().next();
            String key = entry.getKey();
            System.out.println(key);
        }


    }

}

/*
 * final code uploaded on leetcode
 */

/*
class Solution {
   public String longestPalindrome(String s) {
    if (s == null || s.length() < 1) return "";
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = Math.max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substring(start, end + 1);
}

private int expandAroundCenter(String s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s.charAt(L) == s.charAt(R)) {
        L--;
        R++;
    }
    return R - L - 1;
}
}
 */