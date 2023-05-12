import java.util.Scanner;

public class NumberOfOnes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        String numBin = Integer.toBinaryString(num);
        int numOfOnesInBin = numBin.replaceAll("0", "").length();
        System.out.println(numOfOnesInBin);

        scanner.close();
    }

}
