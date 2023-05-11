import java.util.Scanner;

public class Kaleidoscopes {

	public static double getTotal(int numKaleidoscopes) {
	    double price = 5.0;
        double tax = 1.07;
        double subtotal = price;

        if (numKaleidoscopes > 1) {
            double discount = 0.9;
            subtotal = (double) numKaleidoscopes * price * discount;
        }

        double total = subtotal * tax;

        // return the total rounded to 2 decimal places
        return Math.round(total * 100.0) / 100.0;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int numKaleidoscopes = input.nextInt();

		System.out.println(getTotal(numKaleidoscopes));

		input.close();
	}

}
