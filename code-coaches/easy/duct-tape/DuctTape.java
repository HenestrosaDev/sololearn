import java.util.Scanner;

public class DuctTape {

    public static int getArea(int height, int width) {
        return height * width;
    }

    public static int toInches(int feet) {
        return feet * 12;
    }

    public static int getDuctTapesNeeded(int height, int width) {
        // Everything is calculated in inches
        int ductTapeHeight = 720;
        int ductTapeWidth = 2;

        int doorAreaBothSides = getArea(height, width) * 2;
        int ductTapeArea = getArea(ductTapeHeight, ductTapeWidth);

        int ductTapesNeeded = (int) Math.ceil((double) doorAreaBothSides / ductTapeArea);
        return ductTapesNeeded;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int doorHeightFeet = input.nextInt();
        int doorWidthFeet = input.nextInt();

        int doorHeightInches = toInches(doorHeightFeet);
        int doorWidthInches = toInches(doorWidthFeet);

        System.out.println(getDuctTapesNeeded(doorHeightInches, doorWidthInches));

        input.close();
    }

}
