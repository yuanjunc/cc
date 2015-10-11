#include <stdio.h>

int main(void) {
	int x = 1;
	scanf("%d", &x);

	int cnt = 0;
	for ( ; x != 1; cnt++) {
		if (x % 2 == 1) {
			x = 3 * x + 1;
		}
		x /= 2;
	}

	printf("%d\n", cnt);
	return 0;
}
