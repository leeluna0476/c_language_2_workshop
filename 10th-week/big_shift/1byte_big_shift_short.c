#include <stdio.h>

int main(void) {
	unsigned short big_int[10];
	int i;
	for (i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i] = u;
	}

	int N;
	scanf("%d", &N);

	while (N > 0) {
		big_int[9] <<= 1;
		for (i = 8; i >= 0; --i) {
			big_int[i] = (big_int[i] << 1) | ((big_int[i + 1] >> 8) & 1);
		}

		--N;
	}

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", (unsigned char)big_int[i]);
//		printf("0x%02x ", big_int[i] & 0xff); // or this
	}
	printf("\n");
}
