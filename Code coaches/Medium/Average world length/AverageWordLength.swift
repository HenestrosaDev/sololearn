if let words = readLine() {
	let wordsSplitted = words.split(separator: " ")
	
	var wordsNumber = 0.0
	var totalLength = 0.0
	
	for word in wordsSplitted {
		wordsNumber += 1
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