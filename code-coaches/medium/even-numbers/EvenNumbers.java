import java.util.ArrayList;
import java.util.Scanner;

public class EvenNumbers {

    public static String getEvensStr(String numsStr) {
        String[] numsList = numsStr.split(" ");
        ArrayList<String> evenNumsList = new ArrayList<>();

        for (String numStr : numsList) {
            int num = Integer.parseInt(numStr);
            if (num % 2 == 0) {
                evenNumsList.add(numStr);
            }
        }

        String evenNumsStr = String.join(" ", evenNumsList);
        return evenNumsStr;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String numsStr = scanner.nextLine();

        System.out.println(getEvensStr(numsStr));

        scanner.close();
    }

}
