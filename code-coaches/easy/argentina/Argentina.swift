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
	let ars = Decimal(string: readLine()!)! // Argentine peso
	let usd = Decimal(string: readLine()!)! // US dollar
	print(lowerCurrencyAfterConversion(ars: ars, usd: usd))
}

main()
