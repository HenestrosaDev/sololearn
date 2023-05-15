import Foundation

func containsNameBuddy(names: String, myName: String) -> Bool {
    let namesSplit = names.components(separatedBy: " ")

    for name in namesSplit {
        if name.first == myName.first {
            return true  // Found a name buddy
        }
    }

    return false  // No name buddy found
}

func main() {
    if let names = readLine(), let myName = readLine() {
        if containsNameBuddy(names: names, myName: myName) {
            print("Compare notes")
        } else {
            print("No such luck")
        }
    }
}

main()