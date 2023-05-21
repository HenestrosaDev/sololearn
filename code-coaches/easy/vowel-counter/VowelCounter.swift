func getVowelsCount(sentence: String) -> Int {
    let vowels = "aeiou"
    return sentence.lowercased().filter({ vowels.contains($0) }).count
}

func main() {
	print(getVowelsCount(sentence: readLine()!))
}

main()
