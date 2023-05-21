func calculateArea(balcony: String) -> Int {
    let dimensions = balcony.split(separator: ",")
    let length = Int(dimensions[0])!
    let width = Int(dimensions[1])!
    return length * width
}

func main() {
    let balconyA = readLine()!
	let balconyB = readLine()!
	
	let areaA = calculateArea(balcony: balconyA)
	let areaB = calculateArea(balcony: balconyB)

	if areaA > areaB {
		print("Apartment A")
	} else {
		print("Apartment B")
	}
}

main()
