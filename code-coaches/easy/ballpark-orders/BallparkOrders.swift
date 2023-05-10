import Foundation

func getTotalCost(order: [String]) -> Double {
    let menu: [String: Double] = [
        "Pizza": 6.0,
        "Nachos": 6.0,
        "Cheeseburger": 10.0,
        "Water": 4.0,
        "Coke": 5.0
    ]
    let subtotal = order.reduce(0.0) { $0 + (menu[$1] ?? 5.0) }
    let tax = 1.07
    let total = subtotal * tax

    return total.rounded(toPlaces: 2)
}

func main() {
    if let input = readLine() {
        let order = input.split(separator: " ").map { String($0) }
        print(getTotalCost(order: order))
    }
}

main()