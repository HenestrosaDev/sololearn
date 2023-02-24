import java.util.Scanner;

public class PasswordValidation {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String password = input.nextLine();
		String regex = "(?=.*[A-Za-z])(?=(.*\\d){2,})(?=(.*[@$!%*#?&]){2,})[A-Za-z\\d@$!%*#?&]{8,}";

		if (password.matches(regex)) {
			System.out.println("Strong");
		} else {
			System.out.println("Weak");
		}

		input.close();
	}

}
