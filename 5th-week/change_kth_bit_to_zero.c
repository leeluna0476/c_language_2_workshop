#include <stdio.h>

void	print_binary(int n) {
	for (int i = 31; i >= 0; --i) {
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
}

int	main(void) {
	int	n, k;
	scanf("%d %d", &n, &k);

	print_binary(n);
	print_binary(n & ~(1 << k));

	return 0;
}
