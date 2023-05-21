func sumMultiples(num: Int, multiples: Int...) -> Int {
    let sumOfMultiples = (0..<num).filter { x in multiples.contains(where: { m in x % m == 0 }) }.reduce(0, +)
    return sumOfMultiples
}

func main() {
    let num = Int(readLine()!)!
	print(sumMultiples(num: num, multiples: 3, 5))
}

main()
