class Standard {
	public void draw() {
		System.out.println("Drawing");
	}

	public void write() {
		System.out.println("Writing");
	}
}

class Pro extends Standard {
	public void useEffects() {
		System.out.println("Using Effects");
	}

	public void changeResolution() {
		System.out.println("Changing Resolution");
	}
}

public class Main {
	public static void main(String[] args) {
		Standard standard1 = new Standard();
		standard1.draw();
		standard1.write();

		Pro pro1 = new Pro();
		pro1.draw();
		pro1.write();
		pro1.useEffects();
		pro1.changeResolution();
	}
}
