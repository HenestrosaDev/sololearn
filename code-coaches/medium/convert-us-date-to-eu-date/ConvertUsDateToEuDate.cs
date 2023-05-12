using System;
using System.Collections.Generic;

public class ConvertUsDateToEuDate
{
    static string GetEuDate(string usDate)
    {
        Dictionary<string, string> monthToNum = new Dictionary<string, string>()
        {
            {"January", "1"},
            {"February", "2"},
            {"March", "3"},
            {"April", "4"},
            {"May", "5"},
            {"June", "6"},
            {"July", "7"},
            {"August", "8"},
            {"September", "9"},
            {"October", "10"},
            {"November", "11"},
            {"December", "12"},
        };

        string euDate = "";

        if (usDate.Contains("/"))
        {
            string[] usDateSplit = usDate.Split('/');
            euDate = usDateSplit[1] + "/" + usDateSplit[0] + "/" + usDateSplit[2];
        }
        else
        {
            string[] usDateSplit = usDate.Split(' ');
            string month = monthToNum[usDateSplit[0]];
            string day = usDateSplit[1].Substring(0, usDateSplit[1].Length - 1); // remove ','
            euDate = day + "/" + month + "/" + usDateSplit[2];
        }

        return euDate;
    }

    static void Main(string[] args)
    {
        string usDate = Console.ReadLine();
        Console.WriteLine(GetEuDate(usDate));
    }
}
