import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class IsogramDetector {

    public static boolean isIsogram(String word) {
        Set<Character> characters = new HashSet<>();

        for (char c : word.toCharArray()) {
            if (characters.contains(Character.toLowerCase(c))) {
                return false;
            }
            characters.add(Character.toLowerCase(c));
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();

        System.out.println(isIsogram(word));

        scanner.close();
    }

}
