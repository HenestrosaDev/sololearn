func isEachNumberGreaterThanSum(_ numbers: [Int]) -> Bool {
    var sum = 0
    for i in 1..<numbers.count {
        sum += numbers[i - 1]
        if numbers[i] <= sum {
            return false
        }
    }
    return true
}

func main() {
    let numsLength = Int(readLine()!)!
	var numbers = [Int]()

	for _ in 0..<numsLength {
		if let number = readLine().flatMap({ Int($0) }) {
			numbers.append(number)
		}
	}

	print(isEachNumberGreaterThanSum(numbers))
}

main()