import java.util.Scanner;
import java.util.Arrays;

public class thing {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		while (true) {
			String[] words = scanner.nextLine().split(" ");

			System.out.println(Arrays.asList(Arrays.copyOfRange(words, 2, words.length))
				.stream().mapToInt(Integer::parseInt)
				.reduce(Integer.parseInt(words[1]), (a, b) -> {
					switch (words[0].charAt(0)) {
						case '+':
							return a + b;
						case '-':
							return a - b;
						case '*':
							return a * b;
						case '/':
							return a / b;
						default:
							throw new IllegalArgumentException("Invalid operator");
					}
				}));
		}
	}
}
