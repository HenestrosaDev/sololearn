func main() {
    if let input = readLine(), let totalEggs = Int(input),
        let input2 = readLine(), let eggsFoundByMe = Int(input2),
        let input3 = readLine(), let eggsFoundByFriend = Int(input3)
    {
		let eggsFound = eggsFoundByMe + eggsFoundByFriend
        if eggsFound == totalEggs {
	    	print("Candy Time")
        } else {
	    	print("Keep Hunting")
        }
    }
}

main()