import Foundation

func getWaitingTime(_ numPeopleAhead: Int) -> Int {
    let tripDuration = 10
    let boatCapacity = 20

    // add 1 to account for yourself
    let numBoatsNeeded = Int(ceil(Double(numPeopleAhead + 1) / Double(boatCapacity)))

    // tripDuration * 2 because of round trip
    // numBoatsNeeded - 1 to not include our boat
    let waitingTime = (numBoatsNeeded - 1) * tripDuration * 2

    let totalWaitingTime = waitingTime + tripDuration
    return totalWaitingTime
}

func main() {
    let numPeopleAhead = Int(readLine()!)!
	print(getWaitingTime(numPeopleAhead))
}

main()