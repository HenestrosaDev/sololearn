import java.math.BigDecimal;
import java.util.Scanner;

public class Argentina {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		BigDecimal ars = input.nextBigDecimal();
		BigDecimal usd = input.nextBigDecimal();

		BigDecimal arsToUsd = new BigDecimal("0.02");
		BigDecimal convertedUsd = ars.multiply(arsToUsd);

		if (convertedUsd.compareTo(usd) == 1) {
			System.out.println("Dollars");
		} else {
			System.out.println("Pesos");
		}

		input.close();
	}

}
