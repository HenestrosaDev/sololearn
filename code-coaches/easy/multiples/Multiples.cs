using System;

class Multiples
{
    static int SumMultiples(int num, params int[] multiples)
    {
        int sumOfMultiples = 0;
        for (int i = 0; i < num; i++)
        {
            foreach (int multiple in multiples)
            {
                if (i % multiple == 0)
                {
                    sumOfMultiples += i;
                    break;
                }
            }
        }
        return sumOfMultiples;
    }

    static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());
        Console.WriteLine(SumMultiples(num, 3, 5));
    }
}
