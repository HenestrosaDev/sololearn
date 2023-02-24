import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int initScore = scanner.nextInt();
		int scoreTom = initScore;
		int scoreBob = initScore;

		System.out.println("Round 1 results:");
		System.out.println(++scoreTom);
		System.out.println(--scoreBob);
	}
}