import java.util.Scanner;

public class FruitBowl {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int fruit = input.nextInt();

		int apples = fruit / 2;
		int cakes = apples / 3;

		System.out.print(cakes);

		input.close();
	}
	
}