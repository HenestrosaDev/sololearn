import java.util.*;
import java.util.stream.*;

public class PokerHand {

    public static boolean areNumbersConsecutive(List<Integer> lst) {
        List<Integer> sortedList = new ArrayList<>(lst);
        Collections.sort(sortedList);
        return sortedList.equals(IntStream.range(sortedList.get(0), sortedList.get(sortedList.size() - 1) + 1)
                .boxed().collect(Collectors.toList()));
    }

    public static <T> List<Map.Entry<T, Integer>> getDuplicates(List<T> lst) {
        Map<T, Integer> counter = new HashMap<>();
        for (T item : lst) {
            counter.put(item, counter.getOrDefault(item, 0) + 1);
        }
        return counter.entrySet().stream()
                .filter(entry -> entry.getValue() > 1)
                .collect(Collectors.toList());
    }

    public static String evaluatePokerHand(List<String> cards) {
        List<String> deckCardsValueSorted = Arrays.asList("A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "K", "Q");
        List<String> values = new ArrayList<>();
        List<String> suits = new ArrayList<>();

        for (String card : cards) {
            values.add(card.substring(0, card.length() - 1));
            suits.add(card.substring(card.length() - 1));
        }

        List<Map.Entry<String, Integer>> duplicateValues = getDuplicates(values);
        List<Map.Entry<String, Integer>> duplicateSuits = getDuplicates(suits);

        if (duplicateValues.isEmpty()) {
            List<Integer> valuesIndexes = new ArrayList<>();
            for (String value : values) {
                if (deckCardsValueSorted.contains(value)) {
                    valuesIndexes.add(deckCardsValueSorted.indexOf(value));
                }
            }

            if (!duplicateSuits.isEmpty() && duplicateSuits.get(0).getValue() == 5) {
                if (new HashSet<>(values).equals(new HashSet<>(Arrays.asList("10", "J", "Q", "K", "A")))) {
                    return "Royal Flush";
                } else if (areNumbersConsecutive(valuesIndexes)) {
                    return "Straight Flush";
                } else {
                    return "Flush";
                }
            } else if (areNumbersConsecutive(valuesIndexes)) {
                return "Straight";
            }
        } else {
            List<Integer> numCardsSameValue = new ArrayList<>();
            for (Map.Entry<String, Integer> entry : duplicateValues) {
                numCardsSameValue.add(entry.getValue());
            }

            if (numCardsSameValue.contains(3) && numCardsSameValue.contains(2)) {
                return "Full House";
            } else if (numCardsSameValue.contains(4)) {
                return "Four of a Kind";
            } else if (numCardsSameValue.contains(3)) {
                return "Three of a Kind";
            } else if (Collections.frequency(numCardsSameValue, 2) == 2) {
                return "Two Pairs";
            } else if (Collections.frequency(numCardsSameValue, 2) == 1) {
                return "One Pair";
            }
        }

        return "High Card";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> cards = Arrays.asList(scanner.nextLine().split(" "));

        System.out.println(evaluatePokerHand(cards));

		scanner.close();
    }

}