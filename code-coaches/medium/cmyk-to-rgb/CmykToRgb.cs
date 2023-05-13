using System;

public class CMYKToRGB
{
    static string ToRGB(float cyan, float magenta, float yellow, float key)
    {
        int red = (int) Math.Round(255 * (1 - cyan) * (1 - key));
        int green = (int) Math.Round(255 * (1 - magenta) * (1 - key));
        int blue = (int) Math.Round(255 * (1 - yellow) * (1 - key));
        return $"{red},{green},{blue}";
    }

    static void Main(string[] args)
    {
        float cyan = float.Parse(Console.ReadLine());
        float magenta = float.Parse(Console.ReadLine());
        float yellow = float.Parse(Console.ReadLine());
        float key = float.Parse(Console.ReadLine());

        Console.WriteLine(ToRGB(cyan, magenta, yellow, key));
    }
}
