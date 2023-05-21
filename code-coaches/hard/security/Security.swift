func isMoneySafe(_ layout: String) -> Bool {
    if let moneyIndex = layout.index(of: "$"),
        let thiefIndex = layout.index(of: "T") {
        for (i, char) in layout.enumerated() {
            let moneyDistance = layout.distance(from: moneyIndex, to: thiefIndex)
            let thiefDistance = layout.distance(from: thiefIndex, to: moneyIndex)
            let guardDistanceToMoney = layout.distance(from: moneyIndex, to: layout.index(layout.startIndex, offsetBy: i))
            let guardDistanceToThief = layout.distance(from: thiefIndex, to: layout.index(layout.startIndex, offsetBy: i))

            if char == "G" && ((i < moneyDistance && i > guardDistanceToThief) || (i > moneyDistance && i < guardDistanceToThief) || (i < thiefDistance && i > guardDistanceToMoney) || (i > thiefDistance && i < guardDistanceToMoney)) {
                // Found a guard between the money and the thief
                return true
            }
        }
    }

    // No guard found between the money and the thief
    return false
}

func main() {
    let layout = readLine()!

	if isMoneySafe(layout) {
		print("quiet")
	} else {
		print("ALARM")
	}
}

main()