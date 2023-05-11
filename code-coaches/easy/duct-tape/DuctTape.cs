using System;

namespace DuctTape
{
    class Program
    {
        static int GetArea(int height, int width)
        {
            return height * width;
        }

        static int ToInches(int feet)
        {
            return feet * 12;
        }

        static int GetDuctTapesNeeded(int height, int width)
        {
            // Everything is calculated in inches
            int ductTapeHeight = 720;
            int ductTapeWidth = 2;

            int doorAreaBothSides = GetArea(height, width) * 2;
            int ductTapeArea = GetArea(ductTapeHeight, ductTapeWidth);

            int ductTapesNeeded = (int)Math.Ceiling((double)doorAreaBothSides / ductTapeArea);
            return ductTapesNeeded;
        }

        static void Main(string[] args)
        {
            int doorHeightFeet = int.Parse(Console.ReadLine());
            int doorWidthFeet = int.Parse(Console.ReadLine());

            int doorHeightInches = ToInches(doorHeightFeet);
            int doorWidthInches = ToInches(doorWidthFeet);

            Console.WriteLine(GetDuctTapesNeeded(doorHeightInches, doorWidthInches));
        }
    }
}
