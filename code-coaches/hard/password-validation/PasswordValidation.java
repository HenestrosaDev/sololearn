import java.util.Scanner;

public class PasswordValidation {

    public static boolean isPasswordStrong(String password) {
        // Check if the password has at least 2 numbers, 2 special characters,
        // and a length of at least 7 characters
        int numDigits = 0;
        int numSpecialChars = 0;
        for (char c : password.toCharArray()) {
            if (Character.isDigit(c)) {
                numDigits++;
            } else if ("!@#$%&*".indexOf(c) != -1) {
                numSpecialChars++;
            }
        }

        boolean isStrong = numDigits >= 2 && numSpecialChars >= 2 && password.length() >= 7;
        return isStrong;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String password = scanner.nextLine();

        if (isPasswordStrong(password)) {
            System.out.println("Strong");
        } else {
            System.out.println("Weak");
        }

        scanner.close();
    }

}
