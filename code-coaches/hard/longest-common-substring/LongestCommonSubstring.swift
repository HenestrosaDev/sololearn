import Foundation

func getLongestCommonSubstring(_ words: [String]) -> String {
    let shortestWord = words.min(by: { $0.count < $1.count }) ?? ""
    let maxLength = shortestWord.count
    var longestSubstring = ""

    for start in 0..<maxLength {
        for end in (start + 1)...maxLength {
            let startIdx = shortestWord.index(shortestWord.startIndex, offsetBy: start)
            let endIdx = shortestWord.index(shortestWord.startIndex, offsetBy: end)
            let substring = String(shortestWord[startIdx..<endIdx])
            if words.allSatisfy({ $0.contains(substring) }) {
                if substring.count > longestSubstring.count
                   || (substring.count == longestSubstring.count && substring < longestSubstring)
                {
                    longestSubstring = substring
                }
            }
        }
    }

    return longestSubstring
}

func main() {
    guard let input = readLine() else { return }
    let words = input.split(separator: " ").map { String($0) }
    print(getLongestCommonSubstring(words))
}

main()
