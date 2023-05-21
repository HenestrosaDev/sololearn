func isZipCodeValid(_ zipCode: String) -> Bool {
    var isValid = false
    if let zipCodeInt = Int(zipCode) {
        isValid = zipCode.count == 5
    }
    return isValid
}

func main() {
	print(isZipCodeValid(readLine()!))
}

main()
