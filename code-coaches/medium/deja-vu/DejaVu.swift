func checkDejaVu(chars: String) {
    var previousChar: Character?
	var isRepeated = false

	for char in chars {
		if char == previousChar {
			print("Deja Vu")
			isRepeated = true
			break
		} else {
			previousChar = char
		}
	}

	if !isRepeated {
			print("Unique")
	}
}

func main() {
    let chars = readLine()!
	checkDejaVu(chars: chars)
}

main()