#include <stdio.h>

int main(void) {
	const int size = 102;
	char x[size];
	scanf("%s", x);

	int sum = 0;
	for (int i = 0; x[i] != '\0'; i++) {
		sum += x[i] - '0';
	}

	sprintf(x, "%d", sum);
	char *zh_digits[] = {"ling", "yi", "er", "san", "si", "wu", "liu",
	"qi", "ba", "jiu"};
	for (int i = 0; x[i] != '\0'; i++) {
		if (i != 0) {
			putchar(' ');
		}
		printf("%s", zh_digits[x[i]-'0']);
	}
	putchar('\n');
	return 0;
}
