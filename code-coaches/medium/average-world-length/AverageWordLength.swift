func getAverageWordLength(of words: [String]): Int {
    var wordsNumber = words.count
	var totalLength = 0.0

	for word in wordsSplit {
		for chr in word {
			// Swift 5: if chr.isLetter {
			if ((chr >= "a" && chr <= "z") || (chr >= "A" && chr <= "Z")) {
				totalLength += 1
			}
		}
	}

	let averageLength = Int((totalLength / wordsNumber).rounded(.up))
	print(averageLength)
}


func main() {
    if let words = readLine() {
	    let wordsSplit = words.split(separator: " ")
	    print(getAverageWordLength(of: wordsSplit))
    }
}


