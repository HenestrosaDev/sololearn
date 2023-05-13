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
    guard let numCarrots = Int(readLine()!) else { return }
    guard let numBoxes = Int(readLine()!) else { return }
    print(makeCarrotCake(numCarrots: numCarrots, numBoxes: numBoxes))
}

main()
