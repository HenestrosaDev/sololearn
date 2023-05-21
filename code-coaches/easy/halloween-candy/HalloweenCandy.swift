func main() {
    let houses = Double(readLine()!)!
	let billProbability = Int((100 / houses * 2).rounded(.up))

	print(billProbability)
}

main()
