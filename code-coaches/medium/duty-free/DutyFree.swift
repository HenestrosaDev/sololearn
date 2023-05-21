func isOnBudget(itemsPriceEur: [Double]) -> Bool {
    let usdEurRate = 1.1
    let limitPriceUsd = 20.0

    for itemPriceEur in itemsPriceEur {
        let itemPriceUsd = itemPriceEur * usdEurRate
        if itemPriceUsd > limitPriceUsd {
            return false
        }
    }

    return true
}

func main() {
    let itemsPriceEur = readLine()!.split(separator: " ").map { Double($0)! }

    if isOnBudget(itemsPriceEur: itemsPriceEur) {
        print("On to the terminal")
    } else {
        print("Back to the store")
    }
}

main()
