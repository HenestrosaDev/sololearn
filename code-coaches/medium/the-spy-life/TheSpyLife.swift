func decodeMessage(_ message: String) -> String {
    let messageWithoutSymbols = message.filter {
        let isLetter = ($0 >= "a" && $0 <= "z") || ($0 >= "A" && $0 <= "Z")
        let isWhitespace = $0 == " "
        return isLetter || isWhitespace
    }
    let flippedMessageWithoutSymbols = String(messageWithoutSymbols.reversed())
    return flippedMessageWithoutSymbols
}

func main() {
    guard let encodedMessage = readLine() else { return }
    print(decodeMessage(encodedMessage))
}

main()
