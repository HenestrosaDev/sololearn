import java.util.Scanner;

public class EasterEggs {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int totalEggs = input.nextInt();
		int eggsFoundByMe = input.nextInt();
		int eggsFoundByFriend = input.nextInt();
		int eggsFound = eggsFoundByMe + eggsFoundByFriend;

        if (eggsFound == totalEggs) {
	    	System.out.println("Candy Time");
        } else {
	    	System.out.println("Keep Hunting");
        }

		input.close();
    }

}
