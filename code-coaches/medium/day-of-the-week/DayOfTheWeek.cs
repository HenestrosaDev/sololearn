using System;

public class DayOfTheWeek
{
    static string GetDayOfWeek(string dateString)
    {
        DateTime date;
        if (DateTime.TryParse(dateString, out date))
            return date.DayOfWeek.ToString();
        else
            Console.WriteLine("Invalid date format.");
            return "";
    }

    static void Main(string[] args)
    {
        string dateString = Console.ReadLine();
        string dayOfWeek = GetDayOfWeek(dateString);
        Console.WriteLine(dayOfWeek);
    }
}
