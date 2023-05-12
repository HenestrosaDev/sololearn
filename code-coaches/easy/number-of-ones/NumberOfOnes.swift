func main() {
    if let input = readLine(), let intNum = Int(input) {
        let numBin = String(intNum, radix: 2)
        let numOfOnesInBin = numBin.filter { $0 == "1" }.count
        print(numOfOnesInBin)
    }
}

main()