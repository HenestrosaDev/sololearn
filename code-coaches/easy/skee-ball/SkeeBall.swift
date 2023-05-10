func canBuySquirtGun(with score: Int, squirtGunPrice: Int) -> Bool {
    let ratio = 12
	let tickets = score / ratio
	return tickets >= squirtGunPrice
}

func main() {
    if let input1 = readLine(), let score = Int(input1),
		let input2 = readLine(), let squirtGunPrice = Int(input2)
    {
        if canBuySquirtGun(with: score, squirtGunPrice: squirtGunPrice) {
            print("Buy it!")
        } else {
            print("Try again")
        }
    }
}

main()