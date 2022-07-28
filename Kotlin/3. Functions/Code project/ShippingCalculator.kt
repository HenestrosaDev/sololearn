fun shippingCost(
    amount: Double, 
    international: Boolean
): Double {
	if (international) {
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

fun main(args: Array<String>) {
	readLine()?.let {
		val total = it.toDouble()
		readLine()?.let {
			val international = it.toBoolean()    
			println(shippingCost(total, international))
		}
	}
}