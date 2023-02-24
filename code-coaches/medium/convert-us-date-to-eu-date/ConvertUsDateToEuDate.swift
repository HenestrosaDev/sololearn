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
			let usDateSplitted = usDate.split(separator: "/")
			euDate = "\(usDateSplitted[1])/\(usDateSplitted[0])/\(usDateSplitted[2])"
		} else {
			let usDateSplitted = usDate.split(separator: " ")
			guard let month = monthToNum[String(usDateSplitted[0])] else { return }
			let day = usDateSplitted[1].dropLast()
			euDate = "\(day)/\(month)/\(usDateSplitted[2])"
		}
		
		guard let safeEuDate = euDate else { 
			print("Invalid euDate")
			return 
		}

		print(safeEuDate)
	}
}

main()
