func encodeMessage(_ message: String) -> String {
    let asciiLowercaseA = 97
    let asciiLowercaseZ = 122
    var encodedMessage = ""

    for character in message {
        if ((character >= "a" && character <= "z") || (character >= "A" && character <= "Z")) {
            let asciiValue = Int(String(character).lowercased().unicodeScalars.first!.value)
            let invertedAsciiValue = asciiLowercaseZ - (asciiValue - asciiLowercaseA)
            let invertedCharacter = Character(UnicodeScalar(invertedAsciiValue)!)
            encodedMessage.append(invertedCharacter)
        } else {
            encodedMessage.append(character)
        }
    }

    return encodedMessage
}

func main() {
    let message = readLine()!
	print(encodeMessage(message))
}

main()