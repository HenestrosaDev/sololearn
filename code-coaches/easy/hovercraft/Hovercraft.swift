func hovercraftProfitStatus(unitsSold: Int) -> String {
    let sellPrice = 3_000_000
	let costPrice = 2_000_000
	let insurancePrice = 1_000_000

	let unitsBuilt = 10
	let expenses = (unitsBuilt * costPrice) + insurancePrice
	let revenue = unitsSold * sellPrice

	if revenue > expenses {
		return "Profit"
	} else if revenue < expenses {
		return "Loss"
	} else {
		return "Broke Even"
	}
}

func main() {
    let unitsSold = Int(readLine()!)!
	print(hovercraftProfitStatus(unitsSold: unitsSold))
}

main()