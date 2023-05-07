import java.math.BigDecimal;
import java.util.Scanner;

public class Argentina {

    public static String lowerCurrencyAfterConversion(BigDecimal ars, BigDecimal usd) {
		BigDecimal arsToUsdRate = new BigDecimal("0.02");
	    BigDecimal convertedUsd = ars.multiply(arsToUsdRate);

        if (convertedUsd.compareTo(usd) == 1)
            return "Dollars";
        else
            return "Pesos";
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		BigDecimal ars = input.nextBigDecimal();
		BigDecimal usd = input.nextBigDecimal();

        System.out.println(lowerCurrencyAfterConversion(ars, usd));

		input.close();
	}

}
