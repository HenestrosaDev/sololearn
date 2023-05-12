using System;

public class LandHo
{
    static int GetWaitingTime(int numPeopleAhead)
    {
        int tripDuration = 10;
        int boatCapacity = 20;

        // add 1 to account for yourself
        int numBoatsNeeded = (int) Math.Ceiling((double) (numPeopleAhead + 1) / boatCapacity);

        // tripDuration * 2 because of round trip
        // numBoatsNeeded - 1 to not include our boat
        int waitingTime = (numBoatsNeeded - 1) * tripDuration * 2;

        int totalWaitingTime = waitingTime + tripDuration;
        return totalWaitingTime;
    }

    static void Main(string[] args)
    {
        int numPeopleAhead = int.Parse(Console.ReadLine());
        Console.WriteLine(GetWaitingTime(numPeopleAhead));
    }
}
