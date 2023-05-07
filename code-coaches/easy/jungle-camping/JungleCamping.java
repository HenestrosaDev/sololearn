import java.util.Scanner;
import java.util.HashMap;

public class JungleCamping {

	static HashMap<String, String> noiseToAnimal = new HashMap<String, String>() {
        {
            put("Rawr", "Tiger");
            put("Chirp", "Bird");
            put("Ssss", "Snake");
            put("Grr", "Lion");
        }
    };

    public static String getAnimals(String noises) {
        String[] noisesSplit = noises.split(" ");
        StringBuilder animals = new StringBuilder();

        for (String noise : noisesSplit) {
            animals.append(noiseToAnimal.get(noise)).append(" ");
        }

        return animals.toString().trim();
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String noises = input.nextLine();

		System.out.println(getAnimals(noises));
		
		input.close();
	}

}
