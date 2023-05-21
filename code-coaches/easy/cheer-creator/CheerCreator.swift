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
    let yards = Int(readLine()!)!
	print(getCheer(yards: yards))
}

main()