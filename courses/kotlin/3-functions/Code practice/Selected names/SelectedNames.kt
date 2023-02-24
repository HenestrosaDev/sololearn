fun main(args: Array<String>) {
	val names = arrayOf(
		"John", 
		"David", 
		"Amy", 
		"James", 
		"Amanda", 
		"Dave", 
		"Bob", 
		"Billy", 
		"Bobby", 
		"Diana", 
		"Lenny", 
		"Gina"
	)

	val letter = readLine()!![0]
	var res = ""

	names.forEach() { name -> 
		if (name[0] == letter) {
			res += name
		}
	}

	println(res)
} 