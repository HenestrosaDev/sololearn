import java.util.Scanner;

public class FlowingWords {

    public static boolean doesSentenceFlow(String sentence) {
        String[] words = sentence.split(" ");
        for (int i = 1; i < words.length; i++) {
            if (!words[i].startsWith(words[i - 1].substring(words[i - 1].length() - 1))) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String sentence = scanner.nextLine();

        if (doesSentenceFlow(sentence)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }

}
