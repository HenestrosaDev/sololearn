import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		ArrayList<Integer> evenNums = new ArrayList<Integer>();
		int sum = 0;

		while (evenNums.size() < 3) {
			int num = scanner.nextInt();
			evenNums.add(num);
			sum += num;
		}

		int average = sum / evenNums.size();
		System.out.println(average);
	}
}