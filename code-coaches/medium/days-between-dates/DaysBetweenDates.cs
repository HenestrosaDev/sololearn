using System;
using System.Globalization;

public class DaysBetweenDates
{
    static int GetNumDaysBetween(string fromStr, string toStr)
    {
        string dateFormat = "MMMM d, yyyy";
        DateTime fromDate = DateTime.ParseExact(fromStr, dateFormat, CultureInfo.InvariantCulture);
        DateTime toDate = DateTime.ParseExact(toStr, dateFormat, CultureInfo.InvariantCulture);
        TimeSpan span = toDate - fromDate;
        return span.Days;
    }

    static void Main(string[] args)
    {
        string fromStr = Console.ReadLine();
        string toStr = Console.ReadLine();
        Console.WriteLine(GetNumDaysBetween(fromStr, toStr));
    }
}
