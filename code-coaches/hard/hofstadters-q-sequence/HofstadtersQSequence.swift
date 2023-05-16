func qSequence(_ n: Int) -> Int {
    if n <= 2 {
        return 1
    } else {
        return qSequence(n - qSequence(n - 1)) + qSequence(n - qSequence(n - 2))
    }
}

func main() {
    if let input = readLine(), let n = Int(input) {
        let result = qSequence(n)
        print(result)
    }
}

main()