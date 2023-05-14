using System;

class Initials
{
    static string GetInitials(string name)
    {
        string[] nameSplit = name.Split();
        return $"{nameSplit[0][0]}{nameSplit[1][0]}";
    }

    static void Main(string[] args)
    {
        int numNames = int.Parse(Console.ReadLine());
        string[] names = new string[numNames];
        for (int i = 0; i < numNames; i++)
        {
            names[i] = GetInitials(Console.ReadLine());
        }

        Console.WriteLine(string.Join(" ", names));
    }
}