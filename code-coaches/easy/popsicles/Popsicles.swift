if  let input1 = readLine(),
    let siblings = Int(input1),
    let input2 = readLine(),
    let popsicles = Int(input2)
{
	if popsicles % siblings == 0 {
		print("give away")
	} else {
		print("eat them yourself")
	}
}