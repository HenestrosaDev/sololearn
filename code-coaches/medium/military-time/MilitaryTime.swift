func convertFrom12hTo24h(time12h: String) -> String {

}


func main() {
	if var time = readLine() {
		var dayPeriod: String!
			
		let matchedDayPeriod = findAll(for: "\\s[a-zA-Z]{2}", in: time)[0]
		if !matchedDayPeriod.isEmpty {
			time = time.components(separatedBy: matchedDayPeriod).joined(separator: "")
			dayPeriod = matchedDayPeriod.trimmingCharacters(in: .whitespacesAndNewlines).uppercased()
		}
			
		let timeSplitted = time.split(separator: ":")
		var hours = String(timeSplitted[0])
		var minutes = timeSplitted[1]
		
		if hours.count == 1 {
			hours = "0\(hours)"
		}
		
		guard let hoursInt = Int(hours) else { return }
		
		if dayPeriod == "PM" {
			hours = String(hoursInt + 12)
		} else if dayPeriod != "AM" {
			if hoursInt > 12 {
				hours = String(hoursInt - 12)
				minutes += " PM"
			} else {
				minutes += " AM"
			}
		}
		
		print("\(hours):\(minutes)")
	}
}

func findAll(for regex: String, in text: String) -> [String] {
	do {
		let regex = try NSRegularExpression(pattern: regex)
		let results = regex.matches(in: text, range: NSRange(text.startIndex..., in: text))
		return results.map {
			String(text[Range($0.range, in: text)!])
		}
	} catch let error {
		print("invalid regex: \(error.localizedDescription)")
		return []
	}
}

main()
