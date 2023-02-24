fun main(args: Array<String>) {
	val names = arrayOf("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday")
	
	readLine()?.toInt()?.let { index ->
		if (index < names.count()) {
			println(names[index])
		} else {
			println("Invalid day")
		}
	}
}