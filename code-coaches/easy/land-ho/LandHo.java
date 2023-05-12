import java.util.Scanner;

public class LandHo {

    static int getWaitingTime(int numPeopleAhead) {
        int tripDuration = 10;
        int boatCapacity = 20;

        // add 1 to account for yourself
        int numBoatsNeeded = (int) Math.ceil((double) (numPeopleAhead + 1) / boatCapacity);

        // tripDuration * 2 because of round trip
        // numBoatsNeeded - 1 to not include our boat
        int waitingTime = (numBoatsNeeded - 1) * tripDuration * 2;

        int totalWaitingTime = waitingTime + tripDuration;
        return totalWaitingTime;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numPeopleAhead = scanner.nextInt();

        System.out.println(getWaitingTime(numPeopleAhead));

        scanner.close();
    }

}
