func getVowelsCount(sentence: String) -> Int {
    let vowels = "aeiou"
    return sentence.lowercased().filter({ vowels.contains($0) }).count
}

func main() {
    if let sentence = readLine() {
        print(getVowelsCount(sentence: sentence))
    }
}

main()
