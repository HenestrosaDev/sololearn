public class Program {
	public static void main(String[] args) {
		Country c = new Country("France", "Paris");
		System.out.println(String.format("Country:  %s", c.name));
		System.out.println(String.format("Capital:  %s", c.capital));
	}
}

class Country {

	String name;
	String capital;

	public Country(String name, String capital) {
		this.name = name;
		this.capital = capital;
	}

}