import java.util.Scanner;

public class PaintCosts {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int colorsNumber = input.nextInt();

		double basePrice = 40.0;
		double paintPrice = 5.0;
		double taxPercent = 10.0;

		double subtotal = basePrice + (paintPrice * colorsNumber);
		int total = (int) Math.ceil((subtotal / taxPercent) + subtotal);

		System.out.println(total);

		input.close();
	}

}
