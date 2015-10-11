#include <stdio.h>

int main(void) {
	int cnt = 0;
	scanf("%d", &cnt);

	const int size = 101;
	char x[size];
	for (int i = 0; i < cnt; i++) {
		scanf("%s", x);
		int times[] = {0, 0, 0};
		int has_p = 0, has_t = 0;
		for (int i = 0, j = 0; x[i] != '\0'; i++) {
			switch (x[i]) {
			case 'A': amount[j]++; break;
			case 'P': {
				if (p == 0) {
					j++; has_p = 1;
				} else {
					goto NO;
				}
				break;
			}
			case 'T': {
				if (p == 1 && t == 0) {
					j++; t = 1;
				} else {
					goto NO;
				}
				break;
			default : goto NO; break;
			}
		}
		if (p == 1 && t == 1 && amount[1] != 0 && 
			amount[0]*amount[1] == amount[2]) {
			printf("YES\n");
		} else {
			NO: printf("NO\n");
		}
	}
	return 0;
}
