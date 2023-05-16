using System;

class TwoDimensionalMap
{
    static int CalculateMoves(string mapStr)
    {
        string[] mapRows = mapStr.Split(",");
        int numMapRows = mapRows.Length;

        char letterToFind = 'P';
        int[] p1 = null;
        int[] p2 = null;

        for (int i = 0; i < numMapRows; i++)
        {
            for (int j = 0; j < numMapRows; j++)
            {
                if (mapRows[i][j] == letterToFind)
                {
                    if (p1 == null)
                    {
                        p1 = new int[] { i, j };
                    }
                    else
                    {
                        p2 = new int[] { i, j };
                    }
                }
            }
        }

        // Calculate the number of moves using Manhattan distance formula
        int moves = Math.Abs(p1[0] - p2[0]) + Math.Abs(p1[1] - p2[1]);

        return moves;
    }

    static void Main(string[] args)
    {
        string mapStr = Console.ReadLine();
        Console.WriteLine(CalculateMoves(mapStr));
    }
}
