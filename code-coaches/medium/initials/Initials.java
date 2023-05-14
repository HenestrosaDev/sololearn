import java.util.Scanner;

public class Initials {

    public static String getInitials(String name) {
        String[] nameSplit = name.split(" ");
        return nameSplit[0].charAt(0) + "" + nameSplit[1].charAt(0);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numNames = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character after the integer input

        String[] names = new String[numNames];
        for (int i = 0; i < numNames; i++) {
            names[i] = getInitials(scanner.nextLine());
        }

        System.out.println(String.join(" ", names));

        scanner.close();
    }

}