using System;
using System.Collections.Generic;
using System.Data;

public class Mathematics
{
    static int FindMatchingExpression(int answer, List<string> expressions)
    {
        for (int i = 0; i < expressions.Count; i++)
        {
            int result;
            if (int.TryParse(new DataTable().Compute(expressions[i], null).ToString(), out result))
            {
                if (result == answer)
                {
                    return i;
                }
            }
        }

        return -1;
    }

    static void Main(string[] args)
    {
        int answer = int.Parse(Console.ReadLine());
        List<string> expressions = new List<string>(Console.ReadLine().Split());

        int index = FindMatchingExpression(answer, expressions);
        if (index != -1)
            Console.WriteLine($"index {index}");
        else
            Console.WriteLine("none");
    }
}
