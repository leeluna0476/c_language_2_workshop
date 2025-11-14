#include <stdio.h>

void swap(int *i, int *j, int *k) {
	int t = *i;
	*i = *j;
	*j = t;

	int *f = k;
	while (*k != -1)
		++k;
	--k;

	while (f < k) {
		t = *f;
		*f = *k;
		*k = t;
		++f;
		--k;
	}
}

int main() {
	int a = 1, b = 2, c[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -1 };
	swap(&a, &b, c);
	printf("a: %d, b: %d\n", a, b);
	for (int i = 0; i < 11; ++i) {
		printf("%d ", c[i]);
	}
	printf("\n");
}
