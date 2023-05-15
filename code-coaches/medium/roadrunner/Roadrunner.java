import java.util.Scanner;

public class Roadrunner {

    public static boolean isRoadrunnerSafe(int distanceToSafety, int roadrunnerSpeed, int coyoteSpeed) {
        double secondsToSafety = distanceToSafety / roadrunnerSpeed;
        double roadrunnerDistance = roadrunnerSpeed * secondsToSafety;
        double coyoteDistance = coyoteSpeed * secondsToSafety - 50;
        return roadrunnerDistance > coyoteDistance;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int distanceToSafety = scanner.nextInt();
        int roadrunnerSpeed = scanner.nextInt();
        int coyoteSpeed = scanner.nextInt();

        if (isRoadrunnerSafe(distanceToSafety, roadrunnerSpeed, coyoteSpeed)) {
            System.out.println("Meep Meep");
        } else {
            System.out.println("Yum");
        }

        scanner.close();
    }

}
