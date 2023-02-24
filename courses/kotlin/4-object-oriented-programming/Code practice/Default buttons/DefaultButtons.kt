fun main(args: Array<String>) {
	val b1 = Button(
		width = readLine()!!.toInt(), 
		height = readLine()!!.toInt()
	)

	println(b1.width * b1.height)
}

class Button(val width: Int, val height: Int)
