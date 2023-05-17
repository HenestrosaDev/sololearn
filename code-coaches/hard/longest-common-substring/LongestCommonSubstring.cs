using System;
using System.Linq;

class LongestCommonSubstring
{
    static string GetLongestCommonSubstring(string[] words)
    {
        string shortestWord = words.OrderBy(w => w.Length).FirstOrDefault();
        int maxLength = shortestWord.Length;
        string longestSubstring = "";

        // Iterate over all possible substrings of the shortest word
        for (int start = 0; start < maxLength; start++)
        {
            for (int end = start + 1; end <= maxLength; end++)
            {
                string substring = shortestWord.Substring(start, end - start);
                // Check if the substring exists in all other words
                if (words.All(w => w.Contains(substring)))
                {
                    // Update the longest common substring if a longer one is found
                    if (substring.Length > longestSubstring.Length)
                    {
                        longestSubstring = substring;
                    }
                    // If there are multiple longest substrings, return the smallest one in alphabetical order
                    else if (substring.Length == longestSubstring.Length && substring.CompareTo(longestSubstring) < 0)
                    {
                        longestSubstring = substring;
                    }
                }
            }
        }

        return longestSubstring;
    }

    static void Main(string[] args)
    {
        string[] words = Console.ReadLine().Split();
        Console.WriteLine(GetLongestCommonSubstring(words));
    }
}
