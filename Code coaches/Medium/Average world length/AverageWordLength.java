import java.util.Scanner;

public class AverageWorldLength {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String[] words = input.nextLine().split(" ");
		int wordsNumber = 0;
		int totalLength = 0;

		for (String word : words) {
			wordsNumber++;
			for (char c : word.toCharArray()) {
				if (Character.isLetter(c)) {
					totalLength++;
				}
			}
		}

		int averageLength = (int) Math.ceil((double) totalLength / wordsNumber);
		System.out.println(averageLength);

		input.close();
	}

}
