/*
 * Ahn
 */
#include <stdio.h>

void left_shift_big_int(unsigned char *big_int, int Nbits) {
	int i, Nbytes = Nbits / 8, Nbits_mod = Nbits % 8;
	for (i = Nbytes; i < 9; ++i) {
		big_int[i - Nbytes] = (big_int[i] << Nbits_mod) | (big_int[i + 1] >> (8 - Nbits_mod));
	}
	big_int[9 - Nbytes] = big_int[9] << Nbits_mod;
	for (i = 10 - Nbytes; i < 10; ++i) {
		big_int[i] = 0;
	}
}

int main(void) {
	unsigned char big_int[10];
	int i;
	for (i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i] = u;
	}

	int Nbits;
	scanf("%d", &Nbits);

	left_shift_big_int(big_int, Nbits);

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");
}
