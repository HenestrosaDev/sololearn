func getTotalPaintCosts(numColors: Int) -> Int {
    let basePrice = 40.0
    let paintPrice = 5.0
    let taxPercent = 10.0

    let subtotal = basePrice + (paintPrice * colorsNumber)
    let total = ((subtotal / taxPercent) + subtotal).rounded(.up)

    return Int(total)
}

func main() {
    let numColors = Double(readLine()!)!
	print(getTotalPaintCosts(numColors: numColors))
}

main()