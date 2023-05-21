using System;
using System.Collections.Generic;
using System.Linq;

public class PokerHand
{
    static bool AreNumbersConsecutive(List<int> lst)
    {
        return lst.OrderBy(x => x).SequenceEqual(Enumerable.Range(lst.Min(), lst.Count()));
    }

    static List<Tuple<T, int>> GetDuplicates<T>(List<T> lst)
    {
        var counter = new Dictionary<T, int>();
        foreach (T item in lst)
        {
            if (counter.ContainsKey(item))
                counter[item]++;
            else
                counter[item] = 1;
        }
        return counter.Where(x => x.Value > 1).Select(x => new Tuple<T, int>(x.Key, x.Value)).ToList();
    }

    static string EvaluatePokerHand(List<string> cards)
    {
        var deckCardsValueSorted = new List<string> { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "K", "Q" };
        var values = cards.Select(card => card.Substring(0, card.Length - 1)).ToList();
        var suits = cards.Select(card => card.Substring(card.Length - 1, 1)).ToList();

        var duplicateValues = GetDuplicates(values);
        var duplicateSuits = GetDuplicates(suits);

        if (duplicateValues.Count == 0)
        {
            var valuesIndexes = values.Select(value => deckCardsValueSorted.IndexOf(value)).Where(index => index != -1).ToList();

            if (duplicateSuits.Count > 0 && duplicateSuits[0].Item2 == 5)
            {
                if (new HashSet<string> { "10", "J", "Q", "K", "A" }.SetEquals(values))
                    return "Royal Flush";
                else if (AreNumbersConsecutive(valuesIndexes))
                    return "Straight Flush";
                else
                    return "Flush";
            }
            else if (AreNumbersConsecutive(valuesIndexes))
            {
                return "Straight";
            }
        }
        else
        {
            var numCardsSameValue = duplicateValues.Select(value => value.Item2).ToList();

            if (numCardsSameValue.Contains(3) && numCardsSameValue.Contains(2))
                return "Full House";
            else if (numCardsSameValue.Contains(4))
                return "Four of a Kind";
            else if (numCardsSameValue.Contains(3))
                return "Three of a Kind";
            else if (numCardsSameValue.Count(x => x == 2) == 2)
                return "Two Pairs";
            else if (numCardsSameValue.Count(x => x == 2) == 1)
                return "One Pair";
        }

        return "High Card";
    }

    static void Main(string[] args)
    {
        List<string> cards = Console.ReadLine().Split().ToList();
        Console.WriteLine(EvaluatePokerHand(cards));
    }
}
