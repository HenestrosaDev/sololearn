func main() {
    if let input = readLine(), let yardLength = Int(input),
        let input2 = readLine(), let yardWidth = Int(input2)
    {
        let flamingosToPurchase = yardLength + yardWidth
        print(flamingosToPurchase)
    }
}

main()