using System;

class HofstadtersQSequence
{
    static int QSequence(int n)
    {
        if (n <= 2)
            return 1;
        else
            return QSequence(n - QSequence(n - 1)) + QSequence(n - QSequence(n - 2));
    }

    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        Console.WriteLine(QSequence(n));
    }
}
