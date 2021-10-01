import java.util.*;
import java.lang.*;
import java.io.*;

class Game {
    int a, n;
    Scanner sc = new Scanner(System.in);

    public Game() {
        Random ran = new Random();
        a = ran.nextInt(100);
    }

    public void TakeUserInput() {

        n = sc.nextInt();
    }

    public boolean IsCorrectNumber() {
        if (n > a) {
            System.out.println("Guess Lower");
            System.out.println();
            return false;
        } else if (n < a) {
            System.out.println("Guess Higher");
            System.out.println();
            return false;
        } else {
            System.out.println("You Guessed it Correctly");
            System.out.println();
            return true;

        }
    }
}

public class NumberGuesser {
    public static void main(String[] args) {
        // ----Welcome to Guess A Number where you have to guess a Number from 0 to 100 randomly chosen by the computer----
        int counter=1;
        Game OBJECT = new Game();
        System.out.println("----Guess a Number From 0 to 100----");
        OBJECT.TakeUserInput();
        while (OBJECT.IsCorrectNumber() == false) {
            OBJECT.TakeUserInput();
            ++counter;
            System.out.println();
        }
        System.out.println("Total Number of Guesses "+counter);

    }

}
