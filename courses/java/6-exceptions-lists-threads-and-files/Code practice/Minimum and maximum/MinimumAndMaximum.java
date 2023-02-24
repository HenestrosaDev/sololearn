import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
	public static void main(String[] args) {
		ArrayList<Integer> nums = new ArrayList<Integer>();

		Scanner scanner = new Scanner(System.in);

		while (nums.size() < 5) {
			int num = scanner.nextInt();
			nums.add(num);
		}

		int max = Collections.max(nums);
		int min = Collections.min(nums);

		System.out.println(max);
		System.out.println(min);

		scanner.close();
	}
}