fun main(args: Array<String>) {
	var inputsNumber = 0
		
	while(true) {
		var input = readLine()?.toInt() ?: continue
		if (input == 0) {
			break
		} else {
			inputsNumber++
		}
	}
	
	println(inputsNumber)
}