fun main(args: Array<String>) {
	val b1 = Button(200, 50)
	b1.name = readLine()!!

	print(b1.tap())
}

class Button(val width: Int, val height: Int) {
	var name = ""
	
	fun tap(): String {
		return "${this.name} was tapped"
	}
}