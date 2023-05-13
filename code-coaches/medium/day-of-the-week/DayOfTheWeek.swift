import Foundation

func getDayOfWeek(_ dateString: String) -> String? {
    let formatter = DateFormatter()
    formatter.locale = Locale(identifier: "en_US_POSIX")

    formatter.dateFormat = "M/d/yyyy"
    if let date = formatter.date(from: dateString) {
        formatter.dateFormat = "EEEE"
        return formatter.string(from: date)
    }

    formatter.dateFormat = "MMMM dd, yyyy"
    if let date = formatter.date(from: dateString) {
        formatter.dateFormat = "EEEE"
        return formatter.string(from: date)
    }

    return nil
}


func main() {
    if let date = readLine(), let dayOfWeek = getDayOfWeek(date) {
        print(dayOfWeek)
    }
}

main()
