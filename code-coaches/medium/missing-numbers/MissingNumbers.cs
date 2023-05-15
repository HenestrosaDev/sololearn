using System;
using System.Collections.Generic;
using System.Linq;

public class MissingNumbers
{
    static List<int> GetMissingNumbersInSequence(List<int> nums)
    {
        int minNum = nums.Min();
        int maxNum = nums.Max();
        List<int> missingNums = new List<int>();

        for (int num = minNum + 1; num < maxNum; num++)
        {
            if (!nums.Contains(num))
            {
                missingNums.Add(num);
            }
        }

        return missingNums;
    }

    static void Main(string[] args)
    {
        int listLength = int.Parse(Console.ReadLine());
        List<int> nums = new List<int>();

        for (int i = 0; i < listLength; i++)
        {
            int num = int.Parse(Console.ReadLine());
            nums.Add(num);
        }

        List<int> missingNumbers = GetMissingNumbersInSequence(nums);
        string missingNumbersStr = string.Join(" ", missingNumbers);
        Console.WriteLine(missingNumbersStr);
    }
}
