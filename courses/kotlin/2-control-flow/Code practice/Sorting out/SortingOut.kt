fun main(args: Array<String>) {
	readLine()?.toInt().let { age ->
		when (age) {
			in 1..11 -> println("Child")
			in 12..17 -> println("Teen")
			in 18..64 -> println("Adult")
			in 64..Int.MAX_VALUE -> println("Senior")
			else -> println("Invalid age")
		} 
	}
}