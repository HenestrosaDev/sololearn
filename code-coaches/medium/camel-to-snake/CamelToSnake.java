import java.util.Scanner;

public class CamelToSnake {

    public static String toSnakeCase(String camelCaseString) {
        String snakeCaseString = "";

        for (int i = 0; i < camelCaseString.length(); i++) {
            char currentChar = camelCaseString.charAt(i);

            if (i != 0) {
                char previousChar = camelCaseString.charAt(i - 1);

                if ((Character.isUpperCase(currentChar) && Character.isLetter(previousChar))
                    || (Character.isLetter(currentChar) && Character.isDigit(previousChar)))
                {
                    snakeCaseString += "_";
                }
            }

            snakeCaseString += Character.toLowerCase(currentChar);
        }

        return snakeCaseString;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String camelCaseString = scanner.nextLine();

        System.out.println(toSnakeCase(camelCaseString));

        scanner.close();
    }
}
