fun main(args: Array<String>) {
	readLine()!!.toDouble().let { total ->
		readLine().toBoolean().let { isInternational ->
			println(shippingCost(total, isInternational))
		}
	}
}

fun shippingCost(
    amount: Double, 
    isInternational: Boolean
): Double {
	if (isInternational) {
		val internationalRate = 0.15
		val maxShippingPrice = 50.0
		var fee = internationalRate * amount

		return if (fee > maxShippingPrice) {
			maxShippingPrice
		} else {
			fee
		}
	} else {
		return if (amount > 75.0) {
			0.0 // free shipping
		} else {
			val localRate = 0.1
			localRate * amount
		}
	}
}