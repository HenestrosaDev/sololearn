import java.util.Scanner;

public class TwoDimensionalMap {

    public static int calculateMoves(String mapStr) {
        String[] mapRows = mapStr.split(",");
        int numMapRows = mapRows.length;

        char letterToFind = 'P';
        int[] p1 = null;
        int[] p2 = null;

        for (int i = 0; i < numMapRows; i++) {
            for (int j = 0; j < numMapRows; j++) {
                if (mapRows[i].charAt(j) == letterToFind) {
                    if (p1 == null) {
                        p1 = new int[] { i, j };
                    } else {
                        p2 = new int[] { i, j };
                    }
                }
            }
        }

        // Calculate the number of moves using Manhattan distance formula
        int moves = Math.abs(p1[0] - p2[0]) + Math.abs(p1[1] - p2[1]);

        return moves;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String mapStr = scanner.nextLine();

        System.out.println(calculateMoves(mapStr));

        scanner.close();
    }

}
