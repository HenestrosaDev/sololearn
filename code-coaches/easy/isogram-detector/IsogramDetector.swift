func isIsogram(word: String) -> Bool {
    // Set function to remove duplicate characters in the word
    // Then checks if the length of the original word is equal to the length of the set
    return word.count == Set(word.lowercased()).count
}

func main() {
    if let word = readLine() {
        print(isIsogram(word: word))
    }
}

main()
