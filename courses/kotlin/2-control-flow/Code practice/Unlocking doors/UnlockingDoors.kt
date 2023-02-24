fun main(args: Array<String>) {
	readLine()?.toInt()?.let { hour ->
		if (hour <= 18) {
			println("Open")
		} else {
			println("Closed")
		}
	}
}