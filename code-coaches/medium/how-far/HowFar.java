import java.util.Scanner;

public class HowFar {

    public static int getBlocksBetweenHouseAndPond(String layout) {
        // Find the indices of the money, thief, and guards on the casino floor
        int houseIndex = layout.indexOf('H');
        int pondIndex = layout.indexOf('P');
        int[] blockIndices = new int[100];
        int blockCount = 0;
        for (int i = 0; i < layout.length(); i++) {
            if (layout.charAt(i) == 'B') {
                blockIndices[blockCount++] = i;
            }
        }

        int count = 0;
        for (int i = 0; i < blockCount; i++) {
            if (Math.min(houseIndex, pondIndex) < blockIndices[i] && blockIndices[i] < Math.max(houseIndex, pondIndex)) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String layout = scanner.nextLine();

        System.out.println(getBlocksBetweenHouseAndPond(layout));

        scanner.close();
    }
}
