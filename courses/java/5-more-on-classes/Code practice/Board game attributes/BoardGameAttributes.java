class Main {
	public static void main(String[] args) {
		Monopoly monopoly = new Monopoly();
		monopoly.play();

		Chess chess = new Chess();
		chess.play();

		Battleships battleships = new Battleships();
		battleships.play();
	}
}

abstract class Game {
	abstract String getName();
	abstract void play();
}

class Monopoly extends Game {
	String getName() {
		return "Monopoly";
	}

	void play() {
		System.out.println("Buy all property.");
	}
}

class Chess extends Game {
	String getName() {
		return "Chess";
	}

	void play() {
		System.out.println("Kill the enemy king.");
	}
}

class Battleships extends Game {
	String getName() {
		return "Battleships";
	}

	void play() {
		System.out.println("Sink all ships.");
	}
}