import Foundation

func getSavings(prices: [Float]) -> Int {
    guard var maxIndex = prices.firstIndex(of: prices.max()!) else {
        return 0
    }
    var pricesMutable = prices
    pricesMutable.remove(at: maxIndex)

    let discount: Float = 0.3
    let savingsPreTax = pricesMutable.reduce(0.0, { $0 + $1 * discount })

    let tax: Float = 1.07
    let savingsPostTax = savingsPreTax * tax

    return Int(floor(savingsPostTax))
}

func main() {
	let priceStrings = readLine()!.split(separator: ",")
	let prices = priceStrings.compactMap { Float($0) }
	let result = getSavings(prices: prices)
	print(result)
}

main()