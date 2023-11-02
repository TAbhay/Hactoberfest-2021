/*	Write a Java program to read the radius of a circle as an integer from the user. Calculate the diameter, circumference and area of the circle using the floating-point value of π = 3.14159. You can also use the value of π from the Math class which is available in java.lang.
Diameter = 2r
Circumference = 2 πr
Area = πr2
Solution by: Sanober494
 */

import java.lang.Math;
import java.util.Scanner;

public class First_java_code {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the radius of the circle:");
        double radius = scanner.nextDouble();
        System.out.println("Diameter of the circle is: " + 2 * radius);
        System.out.println("Circumference of the circle is: " + 2 * Math.PI * radius);
        System.out.println("Area of the circle is: " + Math.PI * Math.pow(radius, 2));
        scanner.close();

    }
}
