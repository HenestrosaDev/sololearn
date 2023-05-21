func main() {
    let totalEggs = Int(readLine()!)!
    let eggsFoundByMe = Int(readLine()!)!
	let eggsFoundByFriend = Int(readLine()!)!
		
	let eggsFound = eggsFoundByMe + eggsFoundByFriend
	if eggsFound == totalEggs {
		print("Candy Time")
	} else {
		print("Keep Hunting")
	}
}

main()