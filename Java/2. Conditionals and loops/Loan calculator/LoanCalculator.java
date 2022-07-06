import java.util.Scanner;

public class LoanCalculator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int amount = sc.nextInt();
  	int interest = 0;
		int months = 3;
		double interestRate = 0.1;

		for (int i = 0; i < months; i++) {
			interest = (int) (amount * interestRate);
			amount -= interest;
		}

		System.out.println(amount);
		sc.close();
	}
}