using System;

public class Roadrunner
{
    static bool IsRoadrunnerSafe(int distanceToSafety, int roadrunnerSpeed, int coyoteSpeed)
    {
        double secondsToSafety = distanceToSafety / roadrunnerSpeed;
        double roadrunnerDistance = roadrunnerSpeed * secondsToSafety;
        double coyoteDistance = coyoteSpeed * secondsToSafety - 50;
        return roadrunnerDistance > coyoteDistance;
    }

    static void Main(string[] args)
    {
        int distanceToSafety, roadrunnerSpeed, coyoteSpeed;
        distanceToSafety = int.Parse(Console.ReadLine());
        roadrunnerSpeed = int.Parse(Console.ReadLine());
        coyoteSpeed = int.Parse(Console.ReadLine());

        if (IsRoadrunnerSafe(distanceToSafety, roadrunnerSpeed, coyoteSpeed))
            Console.WriteLine("Meep Meep");
        else
            Console.WriteLine("Yum");
    }
}
