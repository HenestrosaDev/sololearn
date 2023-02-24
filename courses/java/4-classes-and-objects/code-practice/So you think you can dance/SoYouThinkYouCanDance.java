import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int scoresSize = 4;
		double[] scores = new double[scoresSize];

		for (int i = 0; i < scoresSize; i++) {
			scores[i] = read.nextDouble();
		}

		double avgScore = getAverageScore(scores);
		System.out.println(avgScore);

		read.close();
	}

	public static double getAverageScore(double[] scores) {
		double average = 0.0;

		for (double score : scores) {
			average += score;
		}

		return average / scores.length;
	}

}