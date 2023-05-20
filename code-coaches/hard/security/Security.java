import java.util.Scanner;

public class Security {

    public static boolean isMoneySafe(String layout) {
        int moneyIndex = layout.indexOf('$');
        int thiefIndex = layout.indexOf('T');

        for (int i = 0; i < layout.length(); i++) {
            if (layout.charAt(i) == 'G' && (i < moneyIndex && i > thiefIndex || i > moneyIndex && i < thiefIndex)) {
                // Found a guard between the money and the thief
                return true;
            }
        }

        // No guard found between the money and the thief
        return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String layout = scanner.nextLine();

        if (isMoneySafe(layout)) {
            System.out.println("quiet");
        } else {
            System.out.println("ALARM");
        }

        scanner.close();
    }

}



// ALTERNATIVE VERSION
/*
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
*/