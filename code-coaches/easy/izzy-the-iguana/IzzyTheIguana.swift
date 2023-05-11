import Foundation

func getSnackPoints(_ snacks: [String]) -> Int {
    let snacksDict = [
        "Mango": 9,
        "Lettuce": 5,
        "Carrot": 4,
        "Cheeseburger": 0,
    ]
    let points = snacks.reduce(0) { $0 + (snacksDict[$1] ?? 0) }
    return points
}

func main() {
    guard let line = readLine() else { return }

    let snacks = line.components(separatedBy: .whitespacesAndNewlines)
    if getSnackPoints(snacks) >= 10 {
        print("Come on Down!")
    } else {
        print("Time to wait")
    }
}

main()
