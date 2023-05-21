func isDivisibleByAll(_ num: Int, _ dividers: [Int]) -> Bool {
    for divider in dividers {
        if num % divider != 0 {
            return false
        }
    }
    return true
}

func main() {
    let num = Int(readLine()!) ?? 0
	let dividers = readLine()!.split(separator: " ").map({ Int($0)! })

	if isDivisibleByAll(num, dividers) {
		print("divisible by all")
	} else {
		print("not divisible by all")
	}
}

main()
