func getMissingNumbersInSequence(nums: [Int]) -> [Int] {
    let minNum = nums.min() ?? 0
    let maxNum = nums.max() ?? 0
    var missingNums = [Int]()

    for num in (minNum + 1)..<maxNum {
        if !nums.contains(num) {
            missingNums.append(num)
        }
    }

    return missingNums
}

func main() {
    let listLength = Int(readLine()!)!
	var nums = [Int]()

	for _ in 0..<listLength {
		let num = Int(readLine()!)!
		nums.append(num)
	}

	let missingNumbers = getMissingNumbersInSequence(nums: nums)
	let missingNumbersStr = missingNumbers.map(String.init).joined(separator: " ")
	print(missingNumbersStr)
}

main()
