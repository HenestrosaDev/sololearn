func getInitials(name: String) -> String {
    let nameSplit = name.split(separator: " ")
    return "\(nameSplit[0].prefix(1))\(nameSplit[1].prefix(1))"
}

func main() {
    if let input = readLine(), let numNames = Int(input) {
        var names = [String]()
        for _ in 0..<numNames {
            guard let name = readLine() else { return }
            let initials = getInitials(name: name)
            names.append(initials)
        }
        print(names.joined(separator: " "))
    }
}

main()