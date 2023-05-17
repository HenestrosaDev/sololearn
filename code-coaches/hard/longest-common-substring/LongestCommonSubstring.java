import java.util.Arrays;
import java.util.Scanner;

public class LongestCommonSubstring {

    public static String getLongestCommonSubstring(String[] words) {
        String shortestWord = Arrays.stream(words).min((a, b) -> Integer.compare(a.length(), b.length())).orElse("");
        int maxLength = shortestWord.length();
        String longestSubstring = "";

        // Iterate over all possible substrings of the shortest word
        for (int start = 0; start < maxLength; start++) {
            for (int end = start + 1; end <= maxLength; end++) {
                String substring = shortestWord.substring(start, end);
                // Check if the substring exists in all other words
                if (Arrays.stream(words).allMatch(w -> w.contains(substring))) {
                    // Update the longest common substring if a longer one is found
                    if (substring.length() > longestSubstring.length()) {
                        longestSubstring = substring;
                    }
                    // If there are multiple longest substrings, return the smallest one in alphabetical order
                    else if (substring.length() == longestSubstring.length() && substring.compareTo(longestSubstring) < 0) {
                        longestSubstring = substring;
                    }
                }
            }
        }

        return longestSubstring;
    }

    public static void main(String[] args) {
        String[] words = new Scanner(System.in).nextLine().split(" ");
        System.out.println(getLongestCommonSubstring(words));
    }

}
