func canBuySquirtGun(score: Int, squirtGunPrice: Int) -> String {
    let ratio = 12
	let tickets = score / ratio

	if tickets >= squirtGunPrice {
		return "Buy it!"
	} else {
		return "Try again"
	}
}

func main() {
    if let input1 = readLine(),
		let score = Int(input1),
		let input2 = readLine(),
		let squirtGunPrice = Int(input2)
    {
        print(canBuySquirtGun(score, squirtGunPrice))
    }
}

main()