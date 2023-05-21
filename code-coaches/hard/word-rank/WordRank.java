import java.util.*;

public class WordRank {

    public static int calculateWordRank(String word) {
        // Generate all permutations of the word
        Set<String> permutations = new HashSet<>();
        generatePermutations("", word, permutations);

        // Sort the permutations alphabetically
        List<String> sortedPermutations = new ArrayList<>(permutations);
        Collections.sort(sortedPermutations);

        // Find the rank of the word in the sorted list
        int rank = sortedPermutations.indexOf(word) + 1;

        return rank;
    }

    private static void generatePermutations(String prefix, String remaining, Set<String> permutations) {
        if (remaining.length() == 0) {
            permutations.add(prefix);
        } else {
            for (int i = 0; i < remaining.length(); i++) {
                String newPrefix = prefix + remaining.charAt(i);
                String newRemaining = remaining.substring(0, i) + remaining.substring(i + 1);
                generatePermutations(newPrefix, newRemaining, permutations);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();

        System.out.println(calculateWordRank(word));

        scanner.close();
    }

}
