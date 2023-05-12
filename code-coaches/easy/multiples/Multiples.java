import java.util.Scanner;

public class Multiples {
    public static int sumMultiples(int num, int... multiples) {
        int sumOfMultiples = 0;
        for (int i = 0; i < num; i++) {
            for (int multiple : multiples) {
                if (i % multiple == 0) {
                    sumOfMultiples += i;
                    break;
                }
            }
        }
        return sumOfMultiples;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        System.out.println(sumMultiples(num, 3, 5));

        sc.close();
    }
}
