import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int a = read.nextInt();

		Pupil pupil = new Pupil();
		pupil.setAge(a);
	}
}

class Pupil {

	private int age;

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		if (age > 6) {
			System.out.println("Welcome");
			this.age = age;
		} else {
			System.out.println("Sorry");
		}
	}

}