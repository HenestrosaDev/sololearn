import java.util.Scanner;

public class YouTubeLinkFinder {

    public static String extractVideoId(String url) throws IllegalArgumentException {
        if (url.contains("youtube.com/watch")) {
            String[] parts = url.split("v=");
            if (parts.length == 2) {
                return parts[1];
            }
        } else if (url.contains("youtu.be/")) {
            String[] parts = url.split("/");
            if (parts.length > 0) {
                return parts[parts.length - 1];
            }
        }
        throw new IllegalArgumentException("Invalid YouTube video URL");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String url = scanner.nextLine();

        try {
            String videoId = extractVideoId(url);
            System.out.println(videoId);
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }

        scanner.close();
    }
}
