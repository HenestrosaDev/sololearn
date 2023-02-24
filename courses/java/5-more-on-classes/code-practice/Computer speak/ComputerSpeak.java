import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		char ch = read.next().charAt(0);
		
		int chInt = (int) ch;
		System.out.println(chInt);

		read.close();
	}
}