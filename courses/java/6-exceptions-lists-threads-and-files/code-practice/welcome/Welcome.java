class Main {
	public static void main(String[] args) {
		Name name = new Name();
		name.setPriority(Thread.MIN_PRIORITY);

		Welcome welcome = new Welcome();
		welcome.setPriority(Thread.MAX_PRIORITY);

		welcome.start();
		name.start();
	}
}

class Welcome extends Thread {
	public void run() {
		System.out.println("Welcome!");
	}
}

class Name extends Thread {
	public void run() {
		System.out.println("Please enter your name");
	}
}