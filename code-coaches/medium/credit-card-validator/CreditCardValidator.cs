using System;

public class CreditCardValidator
{
    static bool DoesPassLuhnAlgorithm(string ccNum)
    {
        // Step 1: Reverse the credit card number
        char[] reversedCcNum = ccNum.ToCharArray();
        Array.Reverse(reversedCcNum);

        int totalSum = 0;
        for (int i = 0; i < reversedCcNum.Length; i++)
        {
            int digit = int.Parse(reversedCcNum[i].ToString());
            // Step 2: Multiply every second digit by 2
            if (i % 2 == 1)
            {
                digit *= 2;
                // Step 3: Subtract 9 from all numbers higher than 9
                if (digit > 9)
                {
                    digit -= 9;
                }
            }

            // Step 4: Add all the digits together
            totalSum += digit;
        }

        // Step 5: Modulo 10 of that sum should be equal to 0
        return totalSum % 10 == 0;
    }

    static bool ValidateCreditCardNumber(string ccNum)
    {
        return ccNum.Length == 16 && DoesPassLuhnAlgorithm(ccNum);
    }

    static void Main(string[] args)
    {
        string ccNum = Console.ReadLine();
        if (ValidateCreditCardNumber(ccNum))
            Console.WriteLine("valid");
        else
            Console.WriteLine("not valid");
    }
}
