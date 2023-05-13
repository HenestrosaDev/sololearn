func isDivisibleByAll(_ num: Int, _ dividers: [Int]) -> Bool {
    for divider in dividers {
        if num % divider != 0 {
            return false
        }
    }
    return true
}

func main() {
    if let input = readLine(), let num = Int(input), let input2 = readLine() {
        let dividers = input2.split(separator: " ").map({ Int($0)! })

        if isDivisibleByAll(num, dividers) {
            print("divisible by all")
        } else {
            print("not divisible by all")
        }
    }
}

main()
