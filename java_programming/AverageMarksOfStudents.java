package arrays;

import java.util.Scanner;

public class AverageMarksOfStudents {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of students : ");
		
		int n=sc.nextInt();
		
		int marks []=new int [n];
		
		System.out.println("Enter marks: ");
		
		for(int i=0;i<n;i++) {
			
			marks[i]= sc.nextInt();
		}
		float avgMarks=0;
		for(int i=0;i<n;i++) {
			avgMarks+=marks[i];
		}
		
		avgMarks/=n;
		System.out.println("The average marks are: "+avgMarks);

	}

}
