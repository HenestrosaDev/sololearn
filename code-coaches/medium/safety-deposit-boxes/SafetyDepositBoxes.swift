func calculateTimeToGetItem(items: [String], itemToFind: String) -> Int {
    var time = 5
    for item in items {
        if item != itemToFind {
            time += 5
        } else {
            break
        }
    }

    return time
}

func main() {
    let itemsString = readLine()! 
	let itemToFind = readLine()!
	
	let items = itemsString.split(separator: ",").map { String($0) }
	print(calculateTimeToGetItem(items: items, itemToFind: itemToFind))
}

main()
