func getBlocksBetweenHouseAndPond(on layout: String) -> Int {
    let houseIndex = street.firstIndex(of: "H")!
    let pondIndex = street.firstIndex(of: "P")!

    // distance(from:to:) returns the number of steps between two indices,
    // excluding the starting index (the house) but excluding the ending
    // index (the pond). We need to subtract 1 from the result to get
    // the actual number of blocks between both and get its absolute value.
    return abs(street.distance(from: houseIndex, to: pondIndex)) - 1
}

func main() {
    let layout = readLine()!
	print(getBlocksBetweenHouseAndPond(on: layout))
}

main()