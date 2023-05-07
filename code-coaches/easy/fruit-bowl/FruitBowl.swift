func getApplePies(fruitCount: Int) -> Int {
    let apples = fruitCount / 2
	return Int(apples / 3)
}

func main() {
    if let input = readLine(), let fruitCount = Int(input) {
	    print(fruitCount)
    }
}

main()