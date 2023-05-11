import java.util.Scanner;

public class GuardFlamingos {

    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
        int yardLength = input.nextInt();
        int yardWidth = input.nextInt();

        int flamingosToPurchase = yardLength + yardWidth;
        System.out.println(flamingosToPurchase);
    }
}