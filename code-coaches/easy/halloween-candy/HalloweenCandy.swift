func main() {
    if let input = readLine(), let houses = Double(input) {
        let billProbability = Int((100 / houses * 2).rounded(.up))
        print(billProbability)
    }
}

main()
