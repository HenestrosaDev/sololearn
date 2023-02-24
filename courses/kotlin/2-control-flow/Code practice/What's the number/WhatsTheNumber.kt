fun main(args: Array<String>) {
	readLine()?.toInt()?.let { num ->
		var digitSum = 0
		var tmpNum = num
		
		while (tmpNum > 0) {
			digitSum += tmpNum % 10
			tmpNum /= 10
		}

		println(digitSum)
	}
}