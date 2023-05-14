import java.util.Scanner;

public class HexColorCodeGenerator {

    public static String rgbToHex(int r, int g, int b) {
        // Convert each RGB value to a two-digit hex string
        String hexCode = String.format("#%02x%02x%02x", r, g, b);
        return hexCode;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int rRgb = scanner.nextInt();
        int gRgb = scanner.nextInt();
        int bRgb = scanner.nextInt();

        System.out.println(rgbToHex(rRgb, gRgb, bRgb));

        scanner.close();
    }

}
