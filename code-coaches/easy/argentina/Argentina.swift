import Foundation

func lowerCurrencyAfterConversion(ars: Decimal, usd: Decimal) -> String {
    let arsToUsdRate: Decimal = 0.02
	let convertedUsd = ars * arsToUsdRate

	if convertedUsd > usd {
		return "Dollars"
	} else {
		return "Pesos"
	}
}

func main() {
    if  let input1 = readLine(),
        let ars = Decimal(string: input1), // Argentine peso
        let input2 = readLine(),
        let usd = Decimal(string: input2) // US dollar
    {
        lowerCurrencyAfterConversion(ars: ars, usd: usd)
    }
}

main()
