import java.util.Scanner;

public class TextDecompressor {

    public static String decompressText(String compressedText) {
        StringBuilder decompressedText = new StringBuilder();
        for (int idx = 1; idx < compressedText.length(); idx += 2) {
            char character = compressedText.charAt(idx - 1);
            int repeatCount = Character.getNumericValue(compressedText.charAt(idx));
            decompressedText.append(String.valueOf(character).repeat(repeatCount));
        }

        return decompressedText.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String compressedText = scanner.nextLine();

        System.out.println(decompressText(compressedText));

        scanner.close();
    }

}
