if let input = readLine(), let criminals = Int(input) {
	if criminals < 5 {
		print("I got this!")
	} else if (5..<11).contains(criminals) {
		print("Help me Batman")
	} else {
		print("Good Luck out there!")
	}
}
