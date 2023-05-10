using System;

class Security
{
    static bool IsMoneySafe(string layout)
    {
        // Find the indices of the money, thief, and guards on the layout
        int moneyIndex = layout.IndexOf("$");
        int thiefIndex = layout.IndexOf("T");
        int[] guardIndices = new int[layout.Length];
        int guardCount = 0;

        for (int i = 0; i < layout.Length; i++)
        {
            if (layout[i] == 'G')
                guardIndices[guardCount++] = i;
        }

        Array.Resize(ref guardIndices, guardCount);

        // Check if there is a guard between the money and the thief
        foreach (int guardIndex in guardIndices)
        {
            if (Math.Min(moneyIndex, thiefIndex) < guardIndex && guardIndex < Math.Max(moneyIndex, thiefIndex))
            {
                // Found a guard between the money and the thief
                return true;
            }
        }

        // No guard found between the money and the thief
        return false;
    }

    static void Main()
    {
        string layout = Console.ReadLine();

        if (IsMoneySafe(layout))
            Console.WriteLine("quiet");
        else
            Console.WriteLine("ALARM");
    }
}
