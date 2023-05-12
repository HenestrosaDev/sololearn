using System;
using System.Collections.Generic;
using System.Linq;

public class NewDriversLicense
{
    static int GetWaitingTime(string myName, int numAgents, List<string> customers)
    {
        int timeForLicense = 20;
        int positionInQueue = customers.IndexOf(myName) + 1;
        int waitingTime = (int) Math.Ceiling((double) positionInQueue / numAgents) * timeForLicense;
        return waitingTime;
    }

    static void Main(string[] args)
    {
        string myName = Console.ReadLine();
        int numAgents = int.Parse(Console.ReadLine());
        List<string> customers = Console.ReadLine().Split().ToList();

        customers.Add(myName);
        customers.Sort();
        Console.WriteLine(GetWaitingTime(myName, numAgents, customers));
    }
}
