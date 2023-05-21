import Foundation

func areNumbersConsecutive(_ lst: [Int]) -> Bool {
    return lst.sorted() == Array(lst.min()!...lst.max()!)
}

func getDuplicates<T: Hashable>(_ lst: [T]) -> [(T, Int)] {
    var counter: [T: Int] = [:]
    for item in lst {
        counter[item, default: 0] += 1
    }
    return counter.filter { $0.value > 1 }.map { ($0.key, $0.value) }
}

func evaluatePokerHand(_ cards: [String]) -> String {
    let deckCardsValueSorted = ["A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "K", "Q"]
    let values = cards.map { String($0.dropLast()) }
    let suits = cards.map { String($0.last!) }

    let duplicateValues = getDuplicates(values)
    let duplicateSuits = getDuplicates(suits)

    if duplicateValues.isEmpty {
        let valuesIndexes = values.compactMap { deckCardsValueSorted.firstIndex(of: $0) }

        if duplicateSuits.count > 0 && duplicateSuits[0].1 == 5 {
            if Set(["10", "J", "Q", "K", "A"]).isSubset(of: Set(values)) {
                return "Royal Flush"
            } else if areNumbersConsecutive(valuesIndexes) {
                return "Straight Flush"
            } else {
                return "Flush"
            }
        } else if areNumbersConsecutive(valuesIndexes) {
            return "Straight"
        }
    } else {
        let numCardsSameValue = duplicateValues.map { $0.1 }

        if numCardsSameValue.contains(3) && numCardsSameValue.contains(2) {
            return "Full House"
        } else if numCardsSameValue.contains(4) {
            return "Four of a Kind"
        } else if numCardsSameValue.contains(3) {
            return "Three of a Kind"
        } else if numCardsSameValue.filter({ $0 == 2 }).count == 2 {
            return "Two Pairs"
        } else if numCardsSameValue.filter({ $0 == 2 }).count == 1 {
            return "One Pair"
        }
    }

    return "High Card"
}

func main() {
    let cards = readLine()!.split(separator: " ").map { String($0) }
    print(evaluatePokerHand(cards))
}

main()
