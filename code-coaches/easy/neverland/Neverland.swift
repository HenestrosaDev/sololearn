func main() {
    let initialAge = Int(readLine()!)!
    let yearsPassed = Int(readLine()!)!

	let finalAge = initialAge + yearsPassed	
	print("My twin is \(finalAge) years old and they are \(yearsPassed) years older than me")
}

main()