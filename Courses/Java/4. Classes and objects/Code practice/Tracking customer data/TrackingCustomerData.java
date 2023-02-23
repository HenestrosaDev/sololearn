import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);

		Customer customer = new Customer(
			read.nextLine(),
			read.nextLine(),
			read.nextInt(),
			read.nextInt()
		);

		customer.saveCustomerInfo();
	}
}

class Customer {

	String firstName;
	String secondName;
	int age;
	int roomNumber;

	public Customer(String firstName, String secondName, int age, int roomNumber) {
		this.firstName = firstName;
		this.secondName = secondName;
		this.age = age;
		this.roomNumber = roomNumber;
	}

	public void saveCustomerInfo() {
		System.out.println(String.format("First name: %s", this.firstName));
		System.out.println(String.format("Second name: %s", this.secondName));
		System.out.println(String.format("Age: %d", this.age));
		System.out.println(String.format("Room number: %d", this.roomNumber));
	}

}
