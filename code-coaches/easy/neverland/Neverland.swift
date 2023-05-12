func main() {
    if let input = readLine(), let initialAge = Int(input),
        let input2 = readLine(), let yearsPassed = Int(input2)
    {
        let finalAge = initialAge + yearsPassed
        print("My twin is \(finalAge) years old and they are \(yearsPassed) years older than me")
    }
}

main()