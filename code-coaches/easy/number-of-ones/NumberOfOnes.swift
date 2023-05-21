func main() {
 	let intNum = Int(readLine()!)!
	let numBin = String(intNum, radix: 2)
	let numOfOnesInBin = numBin.filter { $0 == "1" }.count
	
	print(numOfOnesInBin)
}

main()