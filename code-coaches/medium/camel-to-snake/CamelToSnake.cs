using System;

public class CamelToSnake
{
    static string ToSnakeCase(string camelCaseString)
    {
        string snakeCaseString = "";

        for (int i = 0; i < camelCaseString.Length; i++)
        {
            char currentChar = camelCaseString[i];

            if (i != 0)
            {
                char previousChar = camelCaseString[i - 1];

                if ((char.IsUpper(currentChar) && char.IsLetter(previousChar))
                    || (char.IsLetter(currentChar) && char.IsDigit(previousChar)))
                {
                    snakeCaseString += "_";
                }
            }

            snakeCaseString += char.ToLower(currentChar);
        }

        return snakeCaseString;
    }

    static void Main(string[] args)
    {
        string camelCaseString = Console.ReadLine();
        Console.WriteLine(ToSnakeCase(camelCaseString));
    }
}
