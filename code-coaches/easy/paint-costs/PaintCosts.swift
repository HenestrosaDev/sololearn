if let input = readLine(), let colorsNumber = Double(input) {
    let basePrice = 40.0
    let paintPrice = 5.0
    let taxPercent = 10.0
    
    let subtotal = basePrice + (paintPrice * colorsNumber)
    let total = ((subtotal / taxPercent) + subtotal).rounded(.up)
    
    print(Int(total))
}