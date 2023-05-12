import java.util.Scanner;

public class Neverland {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int initialAge = input.nextInt();
        int yearsPassed = input.nextInt();
        int finalAge = initialAge + yearsPassed;

        System.out.println("My twin is %d years old and they are %d years older than me".formatted(finalAge, yearsPassed));
    }

}
