using System;

public class Balconies
{
    static int CalculateArea(string balcony)
    {
        string[] dimensions = balcony.Split(',');
        int length = int.Parse(dimensions[0]);
        int width = int.Parse(dimensions[1]);
        return length * width;
    }

    static void Main(string[] args)
    {
        string balconyA = Console.ReadLine();
        string balconyB = Console.ReadLine();

        int areaA = CalculateArea(balconyA);
        int areaB = CalculateArea(balconyB);

        if (areaA > areaB)
            Console.WriteLine("Apartment A");
        else
            Console.WriteLine("Apartment B");
    }
}
