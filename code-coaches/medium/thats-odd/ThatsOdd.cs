using System;

class ThatsOdd
{
     static int SumEvenNumbers(int[] numbers)
     {
        int sum = 0;

        foreach (int num in numbers)
        {
            if (num % 2 == 0)
                sum += num;
        }

        return sum;
    }

    static void Main (string[] args)
    {
        int numbersNum = int.Parse(Console.ReadLine());
        int[] numbers = new int[numbersNum];

        for (int i = 0; i < numbersNum; i++)
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }

        Console.WriteLine(SumEvenNumbers(numbers));
    }
}
