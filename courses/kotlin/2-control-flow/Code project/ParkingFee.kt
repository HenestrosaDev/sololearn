fun main(args: Array<String>) {
	readLine()?.let {
		var hours = it.toInt()
		var total = 0.0

		/*
		The problem's statement is poorly formulated because if someone spends, for
		example, 30 hours, the fee should be 15 for 24 hours + 5 for the first 5
		hours + 0.5 per each hour after those first 5 hours. As the statement is, it
		is not clear if after x days, the remaining hours have a fixed fee of 0.5 or
		if they follow the same logic established before based on the first 5 hours
		after those x days. 
    
    Here is the solution for that case:
    
    if (hours > 24) {
			total = 15.0 * (hours / 24)
			hours = hours % 24
    }
    
    if (hours > 5) {
			hours -= 5
			total += hours * 0.5
			hours = 5
    }
    
    total += hours * 1
    println(total)
    */
		
		total = when {
			hours <= 5 -> hours * 1.0
			hours > 5 && hours < 24 -> 5 + ((hours - 5) * 0.5)
			else -> (15 * (hours / 24)) + ((hours % 24) * 0.5)
    }
    
    println(total)
	}  
}