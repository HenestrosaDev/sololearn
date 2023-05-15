import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class SnapCrackleAndPop {

    public static String getSound(int numRiceKrispies) {
        if (numRiceKrispies % 3 == 0)
            return "Pop";
        else if (numRiceKrispies % 2 != 0)
            return "Snap";
        else
            return "Crackle";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        List<Integer> numRiceKrispiesList = new ArrayList<>();
        for (int i = 0; i < 6; i++) {
            int num = scanner.nextInt();
            numRiceKrispiesList.add(num);
        }

        List<String> sounds = new ArrayList<>();
        for (int num : numRiceKrispiesList) {
            String sound = getSound(num);
            sounds.add(sound);
        }

        System.out.println(String.join(" ", sounds));
    }
}
