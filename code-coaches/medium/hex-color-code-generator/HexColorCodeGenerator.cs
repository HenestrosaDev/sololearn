using System;

public class HexColorCodeGenerator
{

    static string RgbToHex(int r, int g, int b)
    {
        // Convert each RGB value to a two-digit hex string
        string hexCode = String.Format("#{0:x2}{1:x2}{2:x2}", r, g, b);
        return hexCode;
    }

    static void Main(string[] args)
    {
        int rRgb = int.Parse(Console.ReadLine());
        int gRgb = int.Parse(Console.ReadLine());
        int bRgb = int.Parse(Console.ReadLine());

        string hexCode = RgbToHex(rRgb, gRgb, bRgb);
        Console.WriteLine(hexCode);
    }
}
