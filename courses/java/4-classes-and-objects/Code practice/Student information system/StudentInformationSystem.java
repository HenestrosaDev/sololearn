import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		String name = read.nextLine();
		int age = read.nextInt();

		Student student = new Student();
		student.name = name;
		student.setAge(age);

		System.out.println(String.format("Name: %s", student.name));
		System.out.println(String.format("Age: %s", student.getAge()));

		read.close();
	}
}

class Student {

	public String name;
	private int age;

	public int getAge() {
		return this.age;
	}

	public void setAge(int age) {
		if (age < 0) {
			System.out.println("Invalid age");
			this.age = 0;
		} else {
			this.age = age;
		}
	}
}
