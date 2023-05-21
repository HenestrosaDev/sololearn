func qSequence(_ n: Int) -> Int {
    if n <= 2 {
        return 1
    } else {
        return qSequence(n - qSequence(n - 1)) + qSequence(n - qSequence(n - 2))
    }
}

func main() {
    let n = Int(readLine()!)!
	print(qSequence(n))
}

main()