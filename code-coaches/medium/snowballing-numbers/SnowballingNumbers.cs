using System;

class SnowballingNumbers
{
    static bool IsEachNumberGreaterThanSum(int[] numbers)
    {
        int sum = 0;
        for (int i = 1; i < numbers.Length; i++)
        {
            sum += numbers[i - 1];
            if (numbers[i] <= sum)
            {
                return false;
            }
        }
        return true;
    }

    static void Main(string[] args)
    {
        int numbersLength = Convert.ToInt32(Console.ReadLine());
        int[] numbers = new int[numbersLength];

        for (int i = 0; i < numbersLength; i++)
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }

        bool result = IsEachNumberGreaterThanSum(numbers);
        Console.WriteLine(result ? "true" : "false");
    }
}
