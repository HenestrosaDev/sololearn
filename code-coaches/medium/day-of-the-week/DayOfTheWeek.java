import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeParseException;
import java.time.format.TextStyle;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static String getDayOfWeek(String dateString) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("M/d/yyyy", Locale.ENGLISH);
        LocalDate date;

        try {
            date = LocalDate.parse(dateString, formatter);
        } catch (DateTimeParseException e) {
            formatter = DateTimeFormatter.ofPattern("MMMM d, yyyy", Locale.ENGLISH);
            try {
                date = LocalDate.parse(dateString, formatter);
            } catch (DateTimeParseException ex) {
                System.out.println("Invalid date format.");
                return "";
            }
        }

        return date.getDayOfWeek().getDisplayName(TextStyle.FULL, Locale.ENGLISH);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputDate = scanner.nextLine();

        System.out.println(getDayOfWeek(inputDate));

        scanner.close();
    }
}
