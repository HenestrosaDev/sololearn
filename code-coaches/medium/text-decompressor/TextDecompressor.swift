func decompressText(compressedText: String) -> String {
    var decompressedText = ""
    var idx = 0
    while idx < compressedText.count {
        let character = compressedText[compressedText.index(compressedText.startIndex, offsetBy: idx)]
        let repeatCount = Int(String(compressedText[compressedText.index(compressedText.startIndex, offsetBy: idx + 1)])) ?? 0
        decompressedText += String(repeating: String(character), count: repeatCount)
        idx += 2
    }
    return decompressedText
}

func main() {
	print(decompressText(compressedText: readLine()!))
}

main()
