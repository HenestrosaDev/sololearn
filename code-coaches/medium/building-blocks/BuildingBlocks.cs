using System;

public class BuildingBlocks
{
    static void Main(string[] args)
    {
        int numBlocks = 0;
        for (int i = 0; i < 4; i++)
        {
            numBlocks += int.Parse(Console.ReadLine());
        }

        int numStudents = 15;
        Console.WriteLine(numBlocks % numStudents);
    }
}
