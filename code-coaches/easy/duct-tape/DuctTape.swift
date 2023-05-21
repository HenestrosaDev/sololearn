import Foundation

func getArea(height: Int, width: Int) -> Int {
    return height * width
}

func toInches(feet: Int) -> Int {
    return feet * 12
}

func getDuctTapesNeeded(height: Int, width: Int) -> Int {
    // Everything is calculated in inches
    let ductTapeHeight = 720
    let ductTapeWidth = 2

    let doorAreaBothSides = getArea(height: height, width: width) * 2
    let ductTapeArea = getArea(height: ductTapeHeight, width: ductTapeWidth)

    let ductTapesNeeded = Int(ceil(Double(doorAreaBothSides) / Double(ductTapeArea)))
    return ductTapesNeeded
}

func main() {
    let doorHeightFeet = Int(readLine()!)!
    let doorWidthFeet = Int(readLine()!)!
        
	let doorHeightInches = toInches(feet: doorHeightFeet)
	let doorWidthInches = toInches(feet: doorWidthFeet)

	print(getDuctTapesNeeded(height: doorHeightInches, width: doorWidthInches))
}

main()
