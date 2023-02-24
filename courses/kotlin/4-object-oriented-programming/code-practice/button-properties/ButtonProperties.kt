fun main(args: Array<String>) {
	val b1 = Button()
	b1.height = readLine()!!.toInt()
	b1.width = readLine()!!.toInt()

	println(b1.width + b1.height)
}

class Button {
	var width: Int = 0
	var height: Int = 0
		set(value) {
			field = if (value < 50) {
				50
			} else {
				value
			}
		}
}