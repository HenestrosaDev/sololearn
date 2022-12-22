fun main(args: Array<String>) {
	val letter: Char = readLine()!![0]
	val text: String = readLine()!!
	
	println(letterCounter(letter, text))
}

fun letterCounter(letter: Char, text: String): Int = text.count { it == letter }