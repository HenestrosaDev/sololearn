func distributePopsicles(popsicles: Int, siblings: Int) -> String {
    if popsicles % siblings == 0 {
		return "give away"
	} else {
		return "eat them yourself"
	}
}

func main() {
	let siblings = Int(readLine()!)!
	let popsicles = Int(readLine()!)!
	print(distributePopsicles(siblings: siblings, popsicles: popsicles))
}

main()