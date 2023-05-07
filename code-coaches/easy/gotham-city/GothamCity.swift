func isBackupNeeded(criminals: Int) -> String {
    if criminals < 5 {
        return "I got this!"
    } else if (5..<11).contains(criminals) {
        return "Help me Batman"
    } else {
        return "Good Luck out there!"
    }
}

func main() {
    if let input = readLine(), let criminals = Int(input) {
        print(isBackupNeeded(criminals: criminals))
    }
}

main()