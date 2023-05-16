using System;

class DigitsOfPi
{
    static char GetPiDecimalAt(int index)
    {
        string piDecimals = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428";
        char decimalValue = piDecimals[index];
        return decimalValue;
    }

    static void Main()
    {
        // - 1 to convert the index to 0-based index
        int index = int.Parse(Console.ReadLine()) - 1;
        Console.WriteLine(GetPiDecimalAt(index));
    }
}
