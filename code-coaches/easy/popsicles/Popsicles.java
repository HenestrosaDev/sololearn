import java.util.Scanner; 
 
public class Popsicles { 

    public static void distributePopsicles(int popsicles, int siblings) {
        if (popsicles % siblings == 0) {
			return "give away";
		} else {
			return "eat them yourself";
		}
    }

	public static void main(String[] args) { 
		Scanner input = new Scanner(System.in);
		int siblings;
		
		do {
			siblings = input.nextInt();
		} while (siblings == 0);
			
		int popsicles = input.nextInt(); 
		
        System.out.println(distributePopsicles(popsicles, siblings));

		input.close();
	}
	
}