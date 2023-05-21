func makeCarrotCake(numCarrots: Int, numBoxes: Int) -> String {
    let numCarrotsLeftover = numCarrots % numBoxes
    let numCarrotsToMakeACake = 7

    if numCarrotsLeftover >= numCarrotsToMakeACake {
        return "Cake Time"
    } else {
        let numAdditionalCarrotsNeeded = numCarrotsToMakeACake - numCarrotsLeftover
        return "I need to buy \(numAdditionalCarrotsNeeded) more"
    }
}

func main() {
    let numCarrots = Int(readLine()!)!
    let numBoxes = Int(readLine()!)!
    print(makeCarrotCake(numCarrots: numCarrots, numBoxes: numBoxes))
}

main()
