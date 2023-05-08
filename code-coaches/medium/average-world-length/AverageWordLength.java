import java.util.Scanner;

public class AverageWorldLength {

    public static int getAverageWordLength(String[] words) {
        int wordsNumber = words.length;
		int totalLength = 0;

		for (String word : words) {
			for (char c : word.toCharArray()) {
				if (Character.isLetter(c)) {
					totalLength++;
				}
			}
		}

		int averageLength = (int) Math.ceil((double) totalLength / wordsNumber);
		return averageLength;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String[] words = input.nextLine().split(" ");

        System.out.println(getAverageWordLength(words));

		input.close();
	}

}
