using System;

class NameBuddy
{
    static bool ContainsNameBuddy(string names, string myName)
    {
        string[] namesSplit = names.Split(' ');

        foreach (string name in namesSplit)
        {
            if (name[0] == myName[0])
            {
                return true;  // Found a name buddy
            }
        }

        return false;  // No name buddy found
    }

    static void Main(string[] args)
    {
        string names = Console.ReadLine();
        string myName = Console.ReadLine();

        if (ContainsNameBuddy(names, myName))
            Console.WriteLine("Compare notes");
        else
            Console.WriteLine("No such luck");
    }
}
