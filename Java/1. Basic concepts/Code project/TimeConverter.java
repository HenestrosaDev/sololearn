import java.util.Scanner;

public class TimeConverter {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int days = sc.nextInt();
		
		System.out.println(days*24*60*60); // seconds
		
		sc.close();
	}
}