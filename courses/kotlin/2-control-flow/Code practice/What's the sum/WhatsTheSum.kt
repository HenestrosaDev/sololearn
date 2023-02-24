fun main(args: Array<String>) {
	readLine()?.toInt()?.let { start ->
		readLine()?.toInt()?.let { end ->
			var sum = 0

			for (i in start..end) {
				sum += i
			}

			println(sum)
		}
	}
}