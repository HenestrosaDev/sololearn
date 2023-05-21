func removeSymbols(from encoded: String) -> String {
    // symbols: a char that is not alphanumeric or a space
    return encoded.filter {
        let isLetter = ($0 >= "a" && $0 <= "z") || ($0 >= "A" && $0 <= "Z")
        let isNumber = $0 >= "0" && $0 <= "9"
        let isWhitespace = $0 == " "
        return isLetter || isNumber || isWhitespace
    }
}

func main() {
    let encoded = readLine()!
	print(removeSymbols(from: encoded))
}

main()