func canBuySquirtGun(with score: Int, squirtGunPrice: Int) -> Bool {
    let ratio = 12
	let tickets = score / ratio
	return tickets >= squirtGunPrice
}

func main() {
    let score = Int(readLine()!)!
	let squirtGunPrice = Int(readLine()!)!

	if canBuySquirtGun(with: score, squirtGunPrice: squirtGunPrice) {
		print("Buy it!")
	} else {
		print("Try again")
	}
}

main()