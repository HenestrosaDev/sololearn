class Main {
	public static void main(String[] args) {
		Player player1 = new Player(Difficulty.EASY);
		Player player2 = new Player(Difficulty.MEDIUM);
		Player player3 = new Player(Difficulty.HARD);
	}
}

enum Difficulty {
	EASY,
	MEDIUM,
	HARD
}

public class Player {
	Player(Difficulty diff) {
		switch (diff) {
			case EASY:
				System.out.println("You have 3000 bullets");
				break;
			case MEDIUM:
				System.out.println("You have 2000 bullets");
				break;
			case HARD:
				System.out.println("You have 1000 bullets");
				break;
		}
	}
}