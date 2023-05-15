import java.util.Scanner;

public class NameBuddy {

    public static boolean containsNameBuddy(String names, String myName) {
        String[] namesSplit = names.split(" ");

        for (String name : namesSplit) {
            if (name.charAt(0) == myName.charAt(0)) {
                return true;  // Found a name buddy
            }
        }

        return false;  // No name buddy found
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String names = scanner.nextLine();
        String myName = scanner.nextLine();

        if (containsNameBuddy(names, myName))
            System.out.println("Compare notes");
        else
            System.out.println("No such luck");

        scanner.close();
    }

}
