func isRoadrunnerSafe(distanceToSafety: Int, roadrunnerSpeed: Int, coyoteSpeed: Int) -> Bool {
    let secondsToSafety = Double(distanceToSafety) / Double(roadrunnerSpeed)
    let roadrunnerDistance = Double(roadrunnerSpeed) * secondsToSafety
    let coyoteDistance = Double(coyoteSpeed) * secondsToSafety - 50
    return roadrunnerDistance > coyoteDistance
}

func main() {
    if let input = readLine(), let distanceToSafety = Int(input),
        let input2 = readLine(), let roadrunnerSpeed = Int(input2),
        let input3 = readLine(), let coyoteSpeed = Int(input3)
    {
        if isRoadrunnerSafe(distanceToSafety: distanceToSafety, roadrunnerSpeed: roadrunnerSpeed, coyoteSpeed: coyoteSpeed) {
            print("Meep Meep")
        } else {
            print("Yum")
        }
    }
}

main()
