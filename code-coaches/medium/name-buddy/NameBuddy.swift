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
	if containsNameBuddy(names: readLine()!, myName: readLine()!) {
		print("Compare notes")
	} else {
		print("No such luck")
	}
}

main()