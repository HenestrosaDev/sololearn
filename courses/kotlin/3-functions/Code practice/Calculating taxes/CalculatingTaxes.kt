fun main(args: Array<String>) {
	readLine()!!.toDouble().let { price ->
		println(afterTax(price))
	}
}

fun afterTax(beforeTax: Double, taxPerc: Double = 15.0): Double =
	(taxPerc / 100.0 * beforeTax) + beforeTax