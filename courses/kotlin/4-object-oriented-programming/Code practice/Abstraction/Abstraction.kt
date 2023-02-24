fun main(args: Array<String>) {
	val b1 = Button(200, 50)
	println(b1.tap())
	println(b1.show())

	val img = Image(300, 500)
	println(img.draw())
	println(img.show())
}

abstract class Component(
	protected val width: Int, 
	protected val height: Int
) {
	abstract fun show(): String
}

class Button(
	width: Int, 
	height: Int,
	private val name: String = "Button"
): Component(width, height) {

	override fun show(): String {
		return "Showing a Button"
	}

	fun tap(): String {
		return "$name was tapped"
	}
    
}

class Image(width: Int, height: Int): Component(width, height) {
	override fun show(): String {
		return "Showing an Image"
	}

	fun draw(): String {
		return "${width}x${height}"
	}
}