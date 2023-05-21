func getApplePies(fruitCount: Int) -> Int {
    let apples = fruitCount / 2
	return Int(apples / 3)
}

func main() {
    let fruitCount = Int(readLine()!)!
	print(getApplePies(fruitCount: fruitCount))
}

main()