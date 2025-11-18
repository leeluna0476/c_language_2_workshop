#include <stdio.h>

int main(void) {
	unsigned char A[10];
	int i, S;
	for (i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%u", &u);
		A[i] = (unsigned char)u;
	}
	scanf("%d", &S);

	for (i = S / 8; i < 10; ++i) {
		A[i - S / 8] = A[i];
	}
	for (i = 10 - S / 8; i < 10; ++i) {
		A[i] = 0;
	}

	for (i = 0; i < 9; ++i) {
		A[i] <<= (S % 8);
		A[i] |= A[i + 1] >> (8 - S % 8);
	}
	A[9] <<= S % 8;

	for (i = 0; i < 10; ++i) {
		printf("0x%x ", A[i]);
	}
	printf("\n");
	return 0;
}
