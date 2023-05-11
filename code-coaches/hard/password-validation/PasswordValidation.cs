using System;

class PasswordValidation
{
    static bool IsPasswordStrong(string password)
    {
        // Check if the password has at least 2 numbers, 2 special characters,
        // and a length of at least 7 characters
        int numDigits = 0, numSpecialChars = 0;
        foreach (char c in password)
        {
            if (char.IsDigit(c))
                numDigits++;
            else if ("!@#$%&*".Contains(c))
                numSpecialChars++;
        }

        bool isStrong = numDigits >= 2 && numSpecialChars >= 2 && password.Length >= 7
        return isStrong;
    }

    static void Main(string[] args)
    {
        string password = Console.ReadLine();

        if (IsPasswordStrong(password))
            Console.WriteLine("Strong");
        else
            Console.WriteLine("Weak");
    }
}
