import Foundation

func getWaitingTime(myName: String, numAgents: Int, customers: [String]) -> Int {
    let timeForLicense = 20
    let positionInQueue = Int(ceil(Double(customers.firstIndex(of: myName)! + 1) / Double(numAgents)))
    let waitingTime = positionInQueue * timeForLicense
    return waitingTime
}

func main() {
    if let myName = readLine(),
        let numAgentsString = readLine(), let numAgents = Int(numAgentsString),
        let customersString = readLine()
    {
        let customers = customersString.split(separator: " ").map({ String($0) })
        var sortedCustomers = customers
        sortedCustomers.append(myName)
        sortedCustomers.sort()

        print(getWaitingTime(myName: myName, numAgents: numAgents, customers: sortedCustomers))
    }
}

main()
