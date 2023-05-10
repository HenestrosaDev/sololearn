import java.util.Scanner;

public class Balconies {

    public static int calculateArea(String balcony) {
        String[] dimensions = balcony.split(",");
        int length = Integer.parseInt(dimensions[0]);
        int width = Integer.parseInt(dimensions[1]);
        return length * width;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String balconyA = input.nextLine();
        String balconyB = input.nextLine();

        int areaA = calculateArea(balconyA);
        int areaB = calculateArea(balconyB);

        if (areaA > areaB) {
            System.out.println("Apartment A");
        } else {
            System.out.println("Apartment B");
        }
    }

}
