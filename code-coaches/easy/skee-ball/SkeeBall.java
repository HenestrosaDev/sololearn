import java.util.Scanner;

public class SkeeBall {

    public static String canBuySquirtGun(int score, int squirtGunPrice) {
        int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;

		if (tickets >= squirtGunPrice)
			return "Buy it!";
		else
			return "Try again";
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int score = input.nextInt();
		int squirtGunPrice = input.nextInt();

        System.out.print(canBuySquirtGun(score, squirtGunPrice));

		input.close();
	}

}
