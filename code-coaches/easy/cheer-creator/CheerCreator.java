import java.util.Scanner;

public class CheerCreator {

    public static String getCheer(int yards) {
        if (yards > 10) {
			return "High Five";
		} else if (yards < 1) {
			return "shh";
		} else {
		    StringBuilder outputBuilder = new StringBuilder();
            for (int i = 0; i < yards; i++) {
                outputBuilder.append("Ra!");
            }
            return outputBuilder.toString();
		}
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int yards = input.nextInt();

        System.out.println(getCheer(yards));

		input.close();
	}

}