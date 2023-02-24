public class Program {
	public static void main(String[] args) {
		String name = "Toyota";
		double engine = 4.7;
		int year = 2019;

		System.out.println(String.format("Name: %s", name));
		System.out.println(String.format("Engine: %,.1f", engine));
		System.out.println(String.format("Year: %d", year));
	}
}