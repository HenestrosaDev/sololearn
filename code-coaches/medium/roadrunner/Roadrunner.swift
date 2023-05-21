func isRoadrunnerSafe(distanceToSafety: Int, roadrunnerSpeed: Int, coyoteSpeed: Int) -> Bool {
    let secondsToSafety = Double(distanceToSafety) / Double(roadrunnerSpeed)
    let roadrunnerDistance = Double(roadrunnerSpeed) * secondsToSafety
    let coyoteDistance = Double(coyoteSpeed) * secondsToSafety - 50
    return roadrunnerDistance > coyoteDistance
}

func main() {
    let distanceToSafety = Int(readLine()!)!
    let roadrunnerSpeed = Int(readLine()!)!
    let coyoteSpeed = Int(readLine()!)!

	if isRoadrunnerSafe(distanceToSafety: distanceToSafety, roadrunnerSpeed: roadrunnerSpeed, coyoteSpeed: coyoteSpeed) {
		print("Meep Meep")
	} else {
		print("Yum")
	}
}

main()
