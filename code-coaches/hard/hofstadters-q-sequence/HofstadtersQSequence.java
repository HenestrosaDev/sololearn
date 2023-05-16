import java.util.Scanner;

public class QSequence {

    public static int qSequence(int n) {
        if (n <= 2) {
            return 1;
        } else {
            return qSequence(n - qSequence(n - 1)) + qSequence(n - qSequence(n - 2));
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println(qSequence(n));

        scanner.close();
    }

}
