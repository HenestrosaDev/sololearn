func getInitials(name: String) -> String {
    let nameSplit = name.split(separator: " ")
    return "\(nameSplit[0].prefix(1))\(nameSplit[1].prefix(1))"
}

func main() {
    let numNames = Int(readLine()!)!

	var names = [String]()
	for _ in 0..<numNames {
		let name = readLine()!
		let initials = getInitials(name: name)
		names.append(initials)
	}

	print(names.joined(separator: " "))
}

main()