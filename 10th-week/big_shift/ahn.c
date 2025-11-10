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

	int Nbits;
	scanf("%d", &Nbits);
	int Nbytes = Nbits / 8, Nbits_mod = Nbits % 8, i;

	for (i = Nbytes; i < 8; ++i) {
		big_int[i - Nbytes] = (big_int[i] << Nbits_mod) | (big_int[i + 1] >> (8 - Nbits_mod));
	}
	big_int[9 - Nbytes] = big_int[i] << Nbits_mod;
	for (i = 10 - Nbytes; i < 10; ++i) {
		big_int[i] = 0;
	}

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");
}
