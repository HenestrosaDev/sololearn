import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MissingNumbers {

    public static List<Integer> getMissingNumbersInSequence(List<Integer> nums) {
        int minNum = nums.stream().min(Integer::compareTo).orElse(0);
        int maxNum = nums.stream().max(Integer::compareTo).orElse(0);
        List<Integer> missingNums = new ArrayList<>();

        for (int num = minNum + 1; num < maxNum; num++) {
            if (!nums.contains(num)) {
                missingNums.add(num);
            }
        }

        return missingNums;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int listLength = Integer.parseInt(scanner.nextLine());
        List<Integer> nums = new ArrayList<>();

        for (int i = 0; i < listLength; i++) {
            int num = Integer.parseInt(scanner.nextLine());
            nums.add(num);
        }

        List<Integer> missingNumbers = getMissingNumbersInSequence(nums);
        String missingNumbersStr = String.join(" ", missingNumbers.toString());
        System.out.println(missingNumbersStr);
    }

}
