import java.util.Scanner;

public class Security {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String diagram = input.nextLine();
		String[] diagramSplitted = diagram.split("\\$");

		boolean isThiefOnLeft = true;
		int thiefPos = -1;
		int guardPos = -1;

		int idx1 = 0;
		for (String part : diagramSplitted) {
			if (part.contains("T")) {
				int idx2 = 0;
				for (char c : part.toCharArray()) {
					if (Character.toUpperCase(c) == 'G') {
						if (!isThiefOnLeft && guardPos != -1) {
							continue;
						} else {
							guardPos = idx2;
						}
					} else if (Character.toUpperCase(c) == 'T') {
						thiefPos = idx2;
					}
				}
			} else if (idx1 == 0) {
				isThiefOnLeft = false;
				continue;
			}
		}

		boolean isLeftRobbed = (guardPos == -1 || guardPos < thiefPos) && isThiefOnLeft;
		boolean isRightRobbed = (guardPos == -1 || guardPos > thiefPos) && !isThiefOnLeft;

		if (isLeftRobbed || isRightRobbed) {
			System.out.print("ALARM");
		} else {
			System.out.print("quiet");
		}

		input.close();
	}

}