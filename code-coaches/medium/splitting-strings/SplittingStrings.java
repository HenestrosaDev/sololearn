import java.util.Scanner;

public class Main {

    public static String splitString(String word, int numParts, String separator) {
        String[] parts = new String[(int) Math.ceil((double) word.length() / numParts)];
        for (int i = 0; i < parts.length; i++) {
            int startIndex = i * numParts;
            int endIndex = Math.min(startIndex + numParts, word.length());
            parts[i] = word.substring(startIndex, endIndex);
        }

        return String.join(separator, parts);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
        int numParts = Integer.parseInt(scanner.nextLine());

        System.out.println(splitString(word, numParts, "-"));

        scanner.close();
    }

}
