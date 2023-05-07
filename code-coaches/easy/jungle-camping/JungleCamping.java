import java.util.Scanner;
import java.util.HashMap;

public class JungleCamping {
	
	public static void main(String[] args) {
		HashMap<String, String> noiseToAnimal = new HashMap<String, String>() {
			{
				put("Rawr", "Tiger");
				put("Chirp", "Bird");
				put("Ssss", "Snake");
				put("Grr", "Lion");
			}
		};

		Scanner input = new Scanner(System.in);
		String[] noisesSplit = input.nextLine().split(" ");

		String animals = "";
		for (String noise : noisesSplit) {
			animals += noiseToAnimal.get(noise) + " ";
		}

		animals = animals.trim();
		System.out.println(animals);
		
		input.close();
	}

}
