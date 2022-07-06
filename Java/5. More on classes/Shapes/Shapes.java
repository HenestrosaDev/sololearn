import java.util.Scanner;

abstract class Shape {
	int width;

	abstract void area();
}

// your code goes here
public class Square extends Shape {
	Square(int width) {
		this.width = width;
	}

	void area() {
		System.out.println(width * width);
	}
}

public class Circle extends Shape {
	Circle(int width) {
		this.width = width;
	}

	void area() {
		System.out.println(Math.PI * width * width);
	}
}

public class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();

		Square square = new Square(x);
		Circle circle = new Circle(y);
		square.area();
		circle.area();

		sc.close();
	}
}