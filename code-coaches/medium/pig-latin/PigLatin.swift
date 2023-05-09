func toPigLatin(_ sentence: String) -> String {
    let words = sentence.split(separator: " ")
    var result = ""

    for word in words {
        var newWord = word
        let firstChar = newWord.removeFirst()
        newWord += "\(firstChar)ay"
        result += "\(newWord) "
    }

    result.removeLast()
    return result
}

func main() {
    if let sentence = readLine() {
        print(toPigLatin(sentence))
    }
}

main()