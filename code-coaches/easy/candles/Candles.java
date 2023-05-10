import java.util.Scanner;

public class Candles {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int numFriends = input.nextInt();
		int candlesPerPerson = 9;
		// + candlesPerPerson because we order 9 candles, independently of the number of friends
		int candles = numFriends * candlesPerPerson + candlesPerPerson;

		System.out.print(candles);

		input.close();
	}

}