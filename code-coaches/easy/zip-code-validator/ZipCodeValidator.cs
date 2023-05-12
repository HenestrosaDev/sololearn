using System;

public class ZipCodeValidator
{
    static bool IsZipCodeValid(string zipCode)
    {
        try
        {
            int zipCodeInt = int.Parse(zipCode);
            return zipCode.Length == 5;
        }
        catch (FormatException)
        {
            return false;
        }
    }

    static void Main() {
        string zipCode = Console.ReadLine();

        if (IsZipCodeValid(zipCode))
            Console.WriteLine("true");
        else
            Console.WriteLine("false");
    }
}
