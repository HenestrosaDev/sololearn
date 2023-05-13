import Foundation

func getNumDaysBetween(from fromString: String, to toString: String) -> Int {
    let dateFormat = "MMMM d, yyyy"
    let dateFormatter = DateFormatter()
    dateFormatter.dateFormat = dateFormat

    guard let fromDate = dateFormatter.date(from: fromString),
          let toDate = dateFormatter.date(from: toString)
    else {
        return 0
    }

    let calendar = Calendar.current
    let components = calendar.dateComponents([.day], from: fromDate, to: toDate)

    return components.day ?? 0
}

func main() {
    guard let fromString = readLine(), let toString = readLine() else { return }
    print(getNumDaysBetween(from: fromString, to: toString))
}

main()