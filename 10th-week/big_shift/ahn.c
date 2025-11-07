/*
 * Ahn
 */
#include <stdio.h>

int main(void) {
	unsigned char big_int[10];
	for (int i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i] = u;
	}

	int N;
	scanf("%d", &N);
	int bytes_shift = N / 8, bits_mod = N % 8, i;

	for (i = bytes_shift; i < 10; ++i) {
		unsigned char v = big_int[i] << bits_mod;
		if (i + 1 < 10) {
			v |= big_int[i + 1] >> (8 - bits_mod);
		}
		big_int[i - bytes_shift] = v;
	}
	for (i -= bytes_shift; i < 10; ++i) {
		big_int[i] = 0;
	}

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");
}
