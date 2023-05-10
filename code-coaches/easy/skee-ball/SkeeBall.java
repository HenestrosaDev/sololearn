import java.util.Scanner;

public class SkeeBall {

    public static boolean canBuySquirtGun(int score, int squirtGunPrice) {
        int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;
		return tickets >= squirtGunPrice;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int score = input.nextInt();
		int squirtGunPrice = input.nextInt();

        if (canBuySquirtGun(score, squirtGunPrice)) {
            System.out.print("Buy it!");
        } else {
            System.out.print("Try again");
        }

		input.close();
	}

}
