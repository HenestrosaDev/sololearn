func doesSentenceFlow(_ sentence: String) -> Bool {
    let words = sentence.split(separator: " ")
    for i in 1..<words.count {
        if words[i].first != words[i - 1].last {
            return false
        }
    }
    return true
}

func main() {
    if let sentence = readLine() {
        print(doesSentenceFlow(sentence))
    }
}

main()
