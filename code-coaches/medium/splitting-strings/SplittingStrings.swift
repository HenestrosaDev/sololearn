import Foundation

func splitString(word: String, numParts: Int, separator: String = "-") -> String {
    var parts = [String]()
    let strideLength = min(numParts, word.count)

    for i in stride(from: 0, to: word.count, by: strideLength) {
        let startIndex = word.index(word.startIndex, offsetBy: i)
        let endIndex = word.index(startIndex, offsetBy: strideLength, limitedBy: word.endIndex) ?? word.endIndex
        parts.append(String(word[startIndex..<endIndex]))
    }

    return parts.joined(separator: separator)
}

func main() {
    let word = readLine()!
	let numParts = Int(readLine()!)!
	
	print(splitString(word: word, numParts: numParts))
}

main()
