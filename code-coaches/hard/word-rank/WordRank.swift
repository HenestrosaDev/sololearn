func findCeil(_ str: [Character], _ first: Character, _ l: Int, _ h: Int) -> Int {
    var ceilIndex = l

    for i in l...h {
        if str[i] > first && str[i] < str[ceilIndex] {
            ceilIndex = i
        }
    }

    return ceilIndex
}

func calculateWordRank(_ str: inout [Character]) -> Int {
    let originalStr = str
    let size = str.count

    str.sort()

    var permutationCount = 0
    var isFinished = false

    while !isFinished {
        permutationCount += 1

        if str == originalStr {
            return permutationCount
        }

        var i = size - 2
        while i >= 0 {
            if str[i] < str[i + 1] {
                break
            }
            i -= 1
        }

        if i == -1 {
            isFinished = true
        } else {
            let ceilIndex = findCeil(str, str[i], i + 1, size - 1)
            str.swapAt(i, ceilIndex)
            str[(i + 1)...].sort()
        }
    }

    return -1
}

func main() {
    let word = readLine()!
    var wordArray = Array(word)
    print(calculateWordRank(&wordArray))
}

main()