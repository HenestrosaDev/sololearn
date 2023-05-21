import Foundation

func getWaitingTime(myName: String, numAgents: Int, customers: [String]) -> Int {
    let timeForLicense = 20
    let positionInQueue = Int(ceil(Double(customers.firstIndex(of: myName)! + 1) / Double(numAgents)))
    let waitingTime = positionInQueue * timeForLicense
    return waitingTime
}

func main() {
    let myName = readLine()!
    let numAgents = Int(readLine()!)!
	let customers = readLine()!.split(separator: " ").map({ String($0) })
	
	var sortedCustomers = customers
	sortedCustomers.append(myName)
	sortedCustomers.sort()

	print(getWaitingTime(myName: myName, numAgents: numAgents, customers: sortedCustomers))
}

main()
