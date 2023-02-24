fun main(args: Array<String>) {
	val b1 = Button(200, 50)
	println(b1.tap())

	val img = Image(300, 500)
	println(img.draw())
}

open class Component(val width: Int, val height: Int)

class Button(
	width: Int, 
	height: Int, 
	val name: String =  "Button"
) : Component(width, height) {
	
	fun tap(): String {
		return "${this.name} was tapped"
	}

}

class Image(
	width: Int, 
	height: Int, 
) : Component(width, height) {

	fun draw(): String {
		return "${this.width}x${this.height}"
	}

}