import java.util.Scanner;

public class PaintCosts {

    public static int getTotalPaintCosts(int numColors) {
        double basePrice = 40.0;
        double paintPrice = 5.0;
        double taxPercent = 10.0;

        double subtotal = basePrice + (paintPrice * colorsNumber);
        int total = (int) Math.Ceiling((subtotal / taxPercent) + subtotal);

        return total;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int numColors = input.nextInt();

		System.out.println(getTotalPaintCosts(numColors));

		input.close();
	}

}
