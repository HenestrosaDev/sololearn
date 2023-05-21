func isPalindrome(word: String) -> Bool {
    return word == String(word.reversed())
}

func containsPalindrome(words: [String]) -> Bool {
    for word in words {
        if isPalindrome(word: word) {
            return true
        }
    }
    return false
}

func main() {
    var words: [String] = []
    for _ in 1...4 {
		words.append(readLine()!)
    }

    if containsPalindrome(words: words) {
        print("Open")
    } else {
        print("Trash")
    }
}

main()
