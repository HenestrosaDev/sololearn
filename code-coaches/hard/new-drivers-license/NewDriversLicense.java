import java.util.*;

class NewDriversLicense {

    public static int getWaitingTime(String myName, int numAgents, List<String> customers) {
        int timeForLicense = 20;
        int positionInQueue = customers.indexOf(myName) + 1;
        int waitingTime = (int) Math.ceil((double) positionInQueue / numAgents) * timeForLicense;
        return waitingTime;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String myName = scanner.nextLine();
        int numAgents = Integer.parseInt(scanner.nextLine());
        List<String> customers = new ArrayList<>(Arrays.asList(scanner.nextLine().split(" ")));

        customers.add(myName);
        Collections.sort(customers);
        System.out.println(getWaitingTime(myName, numAgents, customers));

        scanner.close();
    }
}
