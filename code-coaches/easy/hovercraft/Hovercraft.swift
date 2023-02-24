if let input = readLine(), let unitsSold = Int(input) {
	let sellPrice = 3_000_000
	let costPrice = 2_000_000
	let insurancePrice = 1_000_000
	
	let unitsBuilt = 10
	let expenses = (unitsBuilt * costPrice) + insurancePrice
	let benefit = unitsSold * sellPrice
	
	if benefit > expenses {
		print("Profit")
	} else if benefit < expenses {
		print("Loss")
	} else {
		print("Broke Even")
	}
}
