import java.util.Scanner;

public class SkeeBall {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int score = input.nextInt();
		int squirtGunPrice = input.nextInt();

		int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;

		if (tickets >= squirtGunPrice) {
			System.out.print("Buy it!");
		} else {
			System.out.print("Try again");
		}
		
		input.close();
	}

}
