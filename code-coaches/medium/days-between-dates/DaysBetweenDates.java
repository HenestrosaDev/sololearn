import java.util.Scanner;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;

public class DaysBetweenDates {

    public static int getNumDaysBetween(String fromStr, String toStr) {
        String dateFormat = "MMMM d, yyyy";
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern(dateFormat);

        LocalDate fromDate = LocalDate.parse(fromStr, formatter);
        LocalDate toDate = LocalDate.parse(toStr, formatter);

        return (int) ChronoUnit.DAYS.between(fromDate, toDate);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String fromStr = scanner.nextLine();
        String toStr = scanner.nextLine();

        System.out.println(getNumDaysBetween(fromStr, toStr));

        scanner.close();
    }

}