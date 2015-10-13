#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t size = 110000;
	int *is_prime = malloc(size * sizeof(int));
	for (size_t i = 2; i < size; i++)
		is_prime[i] = 1;
	
	for (size_t i = 2; i < size; i++)
		if (is_prime[i])
			for (size_t j = 2 * i; j < size; j += i)
				is_prime[j] = 0;

	size_t begin, end, count = 0;
	scanf("%zu %zu", &begin, &end);

	for (size_t i = 0; count < end; i++) {
		if (is_prime[i]) {
			count++;
			if (count >= begin) {
				if ((count - begin) % 10 != 0)
					putchar(' ');
				printf("%zu", i);
				if ((count - begin) % 10 == 9)
					putchar('\n');
			}
		}
	}

	free(is_prime);
	return 0;
}
