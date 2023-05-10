func main() {
    if let input = readLine(), let numFriends = Int(input) {
        let candlesPerPerson = 9
		// + candlesPerPerson because we order 9 candles, independently of the number of friends
		let candles = numFriends * candlesPerPerson + candlesPerPerson

		print(candles)
    }
}

main()