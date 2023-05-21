func replaceNumbersWithWords(in sentence: String) -> String {
    let numberWords = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"]

    let words = sentence.split(separator: " ").map { (word: Substring) -> String in
        if let number = Int(word), number <= 10 {
            return numberWords[number]
        } else {
            return String(word)
        }
    }

    return words.joined(separator: " ")
}

func main() {
    let sentence = readLine()!
	print(replaceNumbersWithWords(in: sentence))
}

main()