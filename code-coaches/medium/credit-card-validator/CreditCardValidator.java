import java.util.Scanner;

public class CreditCardValidator {

    public static boolean doesPassLuhnAlgorithm(String ccNum) {
        // Step 1: Reverse the credit card number
        String reversedCcNum = new StringBuilder(ccNum).reverse().toString();

        int totalSum = 0;
        for (int i = 0; i < reversedCcNum.length(); i++) {
            int digit = Character.getNumericValue(reversedCcNum.charAt(i));
            // Step 2: Multiply every second digit by 2
            if (i % 2 == 1) {
                digit *= 2;
                // Step 3: Subtract 9 from all numbers higher than 9
                if (digit > 9) {
                    digit -= 9;
                }
            }

            // Step 4: Add all the digits together
            totalSum += digit;
        }

        // Step 5: Modulo 10 of that sum should be equal to 0
        return totalSum % 10 == 0;
    }

    public static boolean validateCreditCardNumber(String ccNum) {
        return ccNum.length() == 16 && doesPassLuhnAlgorithm(ccNum);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String ccNum = scanner.nextLine();

        if (validateCreditCardNumber(ccNum)) {
            System.out.println("valid");
        } else {
            System.out.println("not valid");
        }

        scanner.close();
    }

}
