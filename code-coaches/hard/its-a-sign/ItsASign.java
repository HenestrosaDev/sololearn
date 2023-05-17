import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ItsASign {

    public static boolean containsPalindrome(List<String> words) {
        for (String word : words) {
            if (isPalindrome(word)) {
                return true;
            }
        }
        return false;
    }

    public static boolean isPalindrome(String word) {
        StringBuilder reversed = new StringBuilder(word).reverse();
        return word.equals(reversed.toString());
    }

    public static void main(String[] args) {
        List<String> words = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            System.out.print("Enter word: ");
            String word = scanner.nextLine();
            words.add(word);
        }

        if (containsPalindrome(words)) {
            System.out.println("Open");
        } else {
            System.out.println("Trash");
        }

        scanner.close();
    }

}
