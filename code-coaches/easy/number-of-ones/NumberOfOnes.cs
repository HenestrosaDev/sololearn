using System;

public class NumberOfOnes
{
    static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());
        string numBin = Convert.ToString(num, 2);
        int numOfOnesInBin = numBin.Split('1').Length - 1;

        Console.WriteLine(numOfOnesInBin);
    }
}
