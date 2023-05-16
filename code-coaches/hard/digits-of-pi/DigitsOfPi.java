import java.util.Scanner;

public class DigitsOfPi {

    public static char getPiDecimalAt(int index) {
        String piDecimals = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428";
        char decimal = piDecimals.charAt(index);
        return decimal;
    }

    public static void main(String[] args) {
        // - 1 to convert the index to 0-based index
        Scanner scanner = new Scanner(System.in);
        int index = scanner.nextInt() - 1;

        System.out.println(getPiDecimalAt(index));

        scanner.close();
    }

}
