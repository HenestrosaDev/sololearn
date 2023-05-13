import java.util.Scanner;

public class CarrotCake {

    public static String makeCarrotCake(int num_carrots, int num_boxes) {
        int num_carrots_leftover = num_carrots % num_boxes;
        int num_carrots_to_make_a_cake = 7;

        if (num_carrots_leftover >= num_carrots_to_make_a_cake) {
            return "Cake Time";
        } else {
            int num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover;
            return "I need to buy " + num_additional_carrots_need + " more";
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num_carrots = input.nextInt();
        int num_boxes = input.nextInt();

        System.out.println(makeCarrotCake(num_carrots, num_boxes));

        input.close();
    }

}
