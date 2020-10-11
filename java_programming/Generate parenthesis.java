//This question is very important from interview point of view.
//https://leetcode.com/problems/generate-parentheses/

import java.util.*;
public class GenerateParenthesis {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		List<String> sc  = generateParenthesis(n);
		System.out.println(sc);
	}
	 public static List<String> generateParenthesis(int n){
		 ArrayList<String> res = new ArrayList<>();
		 if(n == 0) {
			 return res;
		 }
		 ValidParenthesisMaker(res,"",n,n);
		 return res;
	 }
	 public static void  ValidParenthesisMaker(List<String> parentheses,String current,int openBracket,int closeBracket) {
		 if(openBracket == 0 && closeBracket == 0) {
			 parentheses.add(current);
			 return;
		 }
	
		 
		 if(openBracket>0) {
			 ValidParenthesisMaker(parentheses, current + "(", openBracket - 1, closeBracket);
		 }
		 if(closeBracket>0 && closeBracket>openBracket) {
			 ValidParenthesisMaker(parentheses, current + ")", openBracket, closeBracket - 1);
		 }
	 }
	
	
}
