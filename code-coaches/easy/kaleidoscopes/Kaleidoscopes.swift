func getTotal(_ numKaleidoscopes: Int) -> Double {
    let price = 5.0
    let tax = 1.07
    var subtotal = price

    if numKaleidoscopes > 1 {
        let discount = 0.9
        subtotal = Double(numKaleidoscopes) * price * discount
    }

    let total = subtotal * tax

    // return the result rounded to 2 decimal places
    return (total * 100).rounded() / 100
}

func main() {
    if let input = readLine(), let numKaleidoscopes = Int(input) {
        print(getTotal(numKaleidoscopes))
    }
}

main()
