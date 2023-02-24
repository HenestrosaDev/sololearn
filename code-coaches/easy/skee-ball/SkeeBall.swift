if 	let input1 = readLine(),
		let score = Int(input1),
		let input2 = readLine(),
		let squirtGunPrice = Int(input2)
{
	let ratio = 12
	let tickets = score / ratio
	
	if tickets >= squirtGunPrice {
		print("Buy it!")
	} else {
		print("Try again")
	}
}