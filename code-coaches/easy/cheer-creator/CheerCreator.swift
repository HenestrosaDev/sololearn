if let input = readLine(), let yards = Int(input) {
	if yards > 10 {
		print("High Five")
	} else if yards < 1 {
		print("shh")
	} else {
		for _ in 1...yards {
			print("Ra!", terminator: "")
		}
	}
}