func toSnakeCase(camelCaseString: String) -> String {
    var snakeCaseString = ""

    for (i, char) in camelCaseString.enumerated() {
        if i != 0 {
            let previousChar = camelCaseString[camelCaseString.index(camelCaseString.startIndex, offsetBy: i - 1)]

            let isPreviousCharAlpha = (previousChar >= "a" && previousChar <= "z") || (previousChar >= "A" && previousChar <= "Z")
            let isCharAlpha = (char >= "a" && char <= "z") || (char >= "A" && char <= "Z")
            let isCharUppercased = char >= "A" && char <= "Z"
            let isCharNumber = char >= "0" && char <= "9"

            if (isCharUppercased && isPreviousCharAlpha) || (isCharAlpha && isCharNumber) {
                snakeCaseString += "_"
            }
        }
        snakeCaseString += String(char).lowercased()
    }

    return snakeCaseString
}

func main() {
    if let camelCaseString = readLine() {
        print(toSnakeCase(camelCaseString: camelCaseString))
    }
}

main()