import java.util.Scanner;

public class CMYKToRGB {
    public static String toRGB(float cyan, float magenta, float yellow, float key) {
        int red = Math.round(255 * (1 - cyan) * (1 - key));
        int green = Math.round(255 * (1 - magenta) * (1 - key));
        int blue = Math.round(255 * (1 - yellow) * (1 - key));
        return red + "," + green + "," + blue;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float cyan = scanner.nextFloat();
        float magenta = scanner.nextFloat();
        float yellow = scanner.nextFloat();
        float key = scanner.nextFloat();

        System.out.println(toRGB(cyan, magenta, yellow, key));

        scanner.close();
    }
}
