func getCheer(yards: Int) -> String {
    if yards > 10 {
		return "High Five"
	} else if yards < 1 {
		return "shh"
	} else {
		return String(repeating: "Ra!", count: yards)
	}
}

func main() {
    if let input = readLine(), let yards = Int(input) {
	    print(getCheer(yards: yards))
    }
}

main()