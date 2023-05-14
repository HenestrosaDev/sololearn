using System;

class HowFar
{
    static int GetBlocksBetweenHouseAndPond(string layout)
    {
        // Find the indices of the money, thief, and guards on the casino floor
        int houseIndex = layout.IndexOf('H');
        int pondIndex = layout.IndexOf('P');
        int[] blockIndices = new int[100];
        int blockCount = 0;
        for (int i = 0; i < layout.Length; i++)
        {
            if (layout[i] == 'B')
            {
                blockIndices[blockCount++] = i;
            }
        }

        int count = 0;
        for (int i = 0; i < blockCount; i++)
        {
            if (Math.Min(houseIndex, pondIndex) < blockIndices[i] && blockIndices[i] < Math.Max(houseIndex, pondIndex))
            {
                count++;
            }
        }

        return count;
    }

    static void Main()
    {
        string layout = Console.ReadLine();
        Console.WriteLine(GetBlocksBetweenHouseAndPond(layout));
    }
}
