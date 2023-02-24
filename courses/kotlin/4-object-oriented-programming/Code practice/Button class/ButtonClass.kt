fun main(args: Array<String>) {
	val b1 = Button()
	b1.width = readLine()!!.toInt()
	b1.height = readLine()!!.toInt()
	
	println(b1.width + b1.height)
}

class Button {
	var width = 0
	var height = 0
}