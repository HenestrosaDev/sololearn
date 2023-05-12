using System;
using System.Collections.Generic;
using System.Linq;

public class BallparkOrders
{
    static double GetTotalCost(List<string> order)
    {
        Dictionary<string, double> menu = new Dictionary<string, double>() {
            {"Pizza", 6.0},
            {"Nachos", 6.0},
            {"Cheeseburger", 10.0},
            {"Water", 4.0},
            {"Coke", 5.0},
        };
        double subtotal = order.Sum(item => menu.GetValueOrDefault(item, 5.0));
        double tax = 1.07;
        double total = subtotal * tax;
        return Math.Round(total, 2);
    }

    static void Main(string[] args)
    {
        List<string> order = Console.ReadLine().Split(' ').ToList();
        Console.WriteLine(GetTotalCost(order));
    }
}
