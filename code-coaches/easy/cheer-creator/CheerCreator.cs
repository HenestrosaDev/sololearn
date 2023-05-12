using System;
using System.Text;

public class CheerCreator
{
    static string GetCheer(string[] args)
    {
        if (yards > 10)
        {
            return "High Five";
        }
        else if (yards < 1)
        {
            return "shh";
        }
        else
        {
            StringBuilder output = new StringBuilder();
            for (int i = 0; i < yards; i++)
            {
                output.Append("Ra!");
            }

            return output.ToString();
        }
    }

    static void Main(string[] args)
    {
        int yards = int.Parse(Console.ReadLine());
        Console.WriteLine(GetCheer(yards));
    }
}