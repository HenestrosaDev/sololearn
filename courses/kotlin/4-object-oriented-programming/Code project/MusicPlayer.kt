fun main(args: Array<String>) {
	val m = MusicPlayer()
	
	var shouldIterate = true
	while(shouldIterate) {
		readLine()?.let { song ->
			if (song == "stop") {
				shouldIterate = false
			} else {
				m.add(song)
			}
		}
	}

	m.show()
	m.play()
}

class MusicPlayer {
	private var songs = mutableListOf<String>()
	
  fun add(song: String) {
		songs.add(song)
	}

	fun show() {
		for (song in songs) {
			println(song)
		}
	}

	fun play() {
		println("Playing ${songs[0]}")
	}
}