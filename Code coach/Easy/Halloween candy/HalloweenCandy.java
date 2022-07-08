import java.util.Scanner;

public class HalloweenCandy {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int houses;

		do {
			houses = input.nextInt();
		} while (houses < 3);

		int billProbability = (int) Math.ceil(100.0 / houses * 2);
		System.out.println(billProbability);

		input.close();
	}

}