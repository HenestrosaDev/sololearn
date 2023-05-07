let monthToNum = [
	"January": "1",
	"February": "2",
	"March": "3",
	"April": "4",
	"May": "5",
	"June": "6",
	"July": "7",
	"August": "8",
	"September": "9",
	"October": "10",
	"November": "11",
	"December": "12",
]

func main() {
	if let usDate = readLine() {
		var euDate: String!
		
		if usDate.contains("/") {
			let usDateSplit = usDate.split(separator: "/")
			euDate = "\(usDateSplit[1])/\(usDateSplit[0])/\(usDateSplit[2])"
		} else {
			let usDateSplit = usDate.split(separator: " ")
			guard let month = monthToNum[String(usDateSplit[0])] else { return }
			let day = usDateSplit[1].dropLast()
			euDate = "\(day)/\(month)/\(usDateSplit[2])"
		}
		
		guard let safeEuDate = euDate else { 
			print("Invalid euDate")
			return 
		}

		print(safeEuDate)
	}
}

main()
