// zig cc thing.c && ./a.out
// author: slab
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// thanks to fami_fish
char** split(char* str, char* delim) {
	char** words = malloc(sizeof(char*) * strlen(str));

	int i = 0;
	words[i] = strtok(str, delim);

	while (words[i])
		words[++i] = strtok(NULL, delim);

	return words;
}

int calc_line(char* line) {
	char** words = split(line, " ");

	if (words[0] == 0 || words[1] == 0) {
		puts("Invalid input");
		free(words);
		return 0;
	}

	int acc = atoi(words[1]);

	for (int i = 2; words[i] != 0; i++) {
		switch (words[0][0]) {
			case '+':
				acc += atoi(words[i]);
				break;
			case '-':
				acc -= atoi(words[i]);
				break;
			case '*':
				acc *= atoi(words[i]);
				break;
			case '/':
				acc /= atoi(words[i]);
				break;
			default:
				puts("Invalid operator");
				free(words);
				return 0;
		}
	}

	free(words);
	return acc;
}

int main() {
	char input[100];

	while (1) {
		if (!fgets(input, sizeof(input), stdin)) break;
		printf("%d\n", calc_line(input));
		memset(input, 0, sizeof(input));
	}
}
