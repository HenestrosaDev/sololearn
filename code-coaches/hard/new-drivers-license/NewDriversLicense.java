import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;

public class NewDriversLicense {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int timeForLicense = 20;
		String myName = input.nextLine();
		int agents = input.nextInt();

		input.nextLine();
		String[] people = input.nextLine().split(" ");
		ArrayList<String> peopleList = new ArrayList<>(Arrays.asList(people));
		peopleList.add(myName);
		Collections.sort(peopleList);

		int idx = 0;
		for (String person : peopleList) {
			if (person.equals(myName)) {
				int positionInQueue = (int) Math.ceil((double) (idx + 1) / agents);
				int waitingTime = positionInQueue * timeForLicense;
				System.out.println(waitingTime);
				break;
			} 
			
			idx++;
		}

		input.close();
	}

}
