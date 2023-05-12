import java.util.Scanner;

public class VowelsCounter {

    public static int getVowelsCount(String sentence) {
        String vowels = "aeiou";
        return (int) sentence.toLowerCase().chars().filter(ch -> vowels.indexOf(ch) != -1).count();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String sentence = scanner.nextLine();

        System.out.println(getVowelsCount(sentence));

        scanner.close();
    }

}
