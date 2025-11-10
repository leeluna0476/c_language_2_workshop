#include <stdio.h>

int main(void) {
	unsigned char big_int[10] =
		{ 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0xfe, 0xdc };

	int N;
	scanf("%d", &N);
	for (int k = 0; k < N; ++k) {
		unsigned char prev_MSB = 0;
		for (int i = 9; i >= 0; --i) {
			unsigned char curr_MSB = big_int[i] & 0x80;
			big_int[i] = (big_int[i] << 1) | (prev_MSB >> 7);
			prev_MSB = curr_MSB;
		}
	}

	for (int i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");

	return 0;
}
