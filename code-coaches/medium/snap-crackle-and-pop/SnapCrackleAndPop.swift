func getSound(numRiceKrispies: Int) -> String {
    if numRiceKrispies % 3 == 0 {
        return "Pop"
    } else if numRiceKrispies % 2 != 0 {
        return "Snap"
    } else {
        return "Crackle"
    }
}

func main() {
    var numRiceKrispiesList: [Int] = []
    for _ in 0..<6 {
        let num = Int(readLine()!)!
		numRiceKrispiesList.append(num)
    }

    var sounds: [String] = []
    for num in numRiceKrispiesList {
        let sound = getSound(numRiceKrispies: num)
        sounds.append(sound)
    }

    print(sounds.joined(separator: " "))
}

main()
