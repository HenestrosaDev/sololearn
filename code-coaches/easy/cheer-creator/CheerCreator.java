import java.util.Scanner;

public class CheerCreator {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int yards = input.nextInt();

		if (yards > 10) {
			System.out.println("High Five");
		} else if (yards < 1) {
			System.out.println("shh");
		} else {
			for(int i = 0; i < yards; i++) {
				System.out.print("Ra!");
			}
		}

		input.close();
	}

}