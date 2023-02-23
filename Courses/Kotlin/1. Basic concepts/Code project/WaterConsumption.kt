fun main(args: Array<String>) {
	readLine()?.let {
		val years = it.toInt()
		val litersAverage = 15
		println(years * 365 * litersAverage)   
	}    
}