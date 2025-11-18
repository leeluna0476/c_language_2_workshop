#include <stdio.h>

void single_left_shift_big_int(unsigned char *big_int) {
	unsigned char prev_MSB = 0;
	for (int i = 9; i >= 0; --i) {
		unsigned char curr_MSB = big_int[i] & 0x80;
		big_int[i] = (big_int[i] << 1) | (prev_MSB >> 7);
		prev_MSB = curr_MSB;
	}
}

void left_shift_big_int(unsigned char *big_int, int Nbits) {
	while (Nbits > 0) {
		single_left_shift_big_int(big_int);
		--Nbits;
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

	int N;
	scanf("%d", &N);

	left_shift_big_int(big_int, N);

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");

	return 0;
}
