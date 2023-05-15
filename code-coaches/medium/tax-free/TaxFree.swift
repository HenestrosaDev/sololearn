import Foundation

func getTotal(prices: [Int]) -> Float {
    let tax: Float = 1.07
    var total: Float = 0.0
    for price in prices {
        total += (price < 20) ? Float(price) * tax : Float(price)
    }
    let totalRounded = round(total * 100) / 100.0
    return totalRounded
}

func main() {
    if let input = readLine() {
        let priceStrings = input.components(separatedBy: ",")
        let prices = priceStrings.compactMap { Int($0) }
        let result = getTotal(prices: prices)
        print(String(format: "%.2f", result))
    }
}

main()
