import java.util.Scanner;

public class BuildingBlocks {

    public static void main(String[] args) {
        final int numStudents = 15;
        int numBlocks = 0;
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 4; ++i) {
            int input = scanner.nextInt();
            numBlocks += input;
        }

        System.out.println(numBlocks % numStudents);

        scanner.close();
    }

}
