func convertFrom12hTo24h(time12h: String) -> String {
    let timeComponents = time12h.components(separatedBy: " ")
    let time = timeComponents[0]
    let indicator = timeComponents[1]
    let timeParts = time.components(separatedBy: ":")

    var hour = Int(timeParts[0])!
    let minute = Int(timeParts[1])!

    if indicator == "PM" && hour != 12 {
        hour += 12
    } else if indicator == "AM" && hour == 12 {
        hour = 0
    }

    return String(format: "%02d:%02d", hour, minute)
}

func main() {
	print(convertFrom12hTo24h(time12h: readLine()!))
}

main()
