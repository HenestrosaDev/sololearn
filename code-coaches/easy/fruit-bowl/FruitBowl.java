import java.util.Scanner;

public class FruitBowl {

    public static int getApplePies(int fruitCount) {
        int appleCount = fruitCount / 2;
        return appleCount / 3;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int fruitCount = input.nextInt();

		System.out.print(getApplePies(fruitCount));

		input.close();
	}
	
}