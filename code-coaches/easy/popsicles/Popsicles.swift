func distributePopsicles(popsicles: Int, siblings: Int) -> String {
    if popsicles % siblings == 0 {
		return "give away"
	} else {
		return "eat them yourself"
	}
}

func main() {
    if  let input1 = readLine(),
        let siblings = Int(input1),
        let input2 = readLine(),
        let popsicles = Int(input2)
    {
        print(distributePopsicles(siblings: siblings, popsicles: popsicles))
    }
}

main()