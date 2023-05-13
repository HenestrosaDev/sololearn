using System;

public class CarrotCake
{
    static string MakeCarrotCake(int num_carrots, int num_boxes)
    {
        int num_carrots_leftover = num_carrots % num_boxes;
        int num_carrots_to_make_a_cake = 7;

        if (num_carrots_leftover >= num_carrots_to_make_a_cake)
        {
            return "Cake Time";
        }
        else
        {
            int num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover;
            return $"I need to buy {num_additional_carrots_need} more";
        }
    }

    static void Main(string[] args)
    {
        int num_carrots = int.Parse(Console.ReadLine());
        int num_boxes = int.Parse(Console.ReadLine());
        Console.WriteLine(MakeCarrotCake(num_carrots, num_boxes));
    }
}
