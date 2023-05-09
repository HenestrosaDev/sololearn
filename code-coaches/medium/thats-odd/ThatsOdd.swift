func sumEvenNumbers(numbers: [Int]) -> Int {
    var sum = 0
    for num in numbers {
        if num % 2 == 0 {
            sum += num
        }
    }
    return sum
}

func main() {
    let numbers_num = Int(readLine()!)!
    var numbers: [Int] = []
    for _ in 0..<numbers_num {
        numbers.append(Int(readLine()!)!)
    }
    print(sumEvenNumbers(numbers: numbers))
}

main()
