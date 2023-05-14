using System;

class FlowingWords
{
    static bool DoesSentenceFlow(string sentence)
    {
        string[] words = sentence.Split(' ');
        for (int i = 1; i < words.Length; ++i)
        {
            if (words[i][0] != words[i - 1][words[i - 1].Length - 1])
            {
                return false;
            }
        }
        return true;
    }

    static void Main(string[] args)
    {
        string sentence = Console.ReadLine();

        if (DoesSentenceFlow(sentence))
            Console.WriteLine("true");
        else
            Console.WriteLine("false");
    }
}
