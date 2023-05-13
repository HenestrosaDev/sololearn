func getEvensStr(_ numsStr: String) -> String {
    let numsList = numsStr.split(separator: " ")
    var evenNumsList = [String]()

    for numStr in numsList {
        let num = Int(numStr)!
        if num % 2 == 0 {
            evenNumsList.append(String(num))
        }
    }

    let evenNumsStr = evenNumsList.joined(separator: " ")
    return evenNumsStr
}

func main() {
    guard let numsStr = readLine() else { return }
    print(getEvensStr(numsStr))
}

main()