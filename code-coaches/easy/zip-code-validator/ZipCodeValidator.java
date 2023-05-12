import java.util.Scanner;

public class ZipCodeValidator {

    public static boolean isZipCodeValid(String zipCode) {
        try {
            int zipCodeInt = Integer.parseInt(zipCode);
            return zipCode.length() == 5;
        } catch (NumberFormatException e) {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String zipCode = input.nextLine();

        System.out.println(isZipCodeValid(zipCode));

        input.close();
    }

}
